import os
import requests
import time

# ==================== CONFIGURATION ====================
BEARER_TOKEN = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpYXQiOjE3ODI2NzMwMDEsIm5iZiI6MTc4MjY3MzAwMSwianRpIjoiYzQ0MzliZjMtMmMwMi00ODFkLTk1NTktZTQzN2FhYmU0NzUyIiwiZXhwIjoxNzgyNjc2NjAxLCJpZGVudGl0eSI6MTQyOSwiZnJlc2giOmZhbHNlLCJ0eXBlIjoiYWNjZXNzIn0.2ZmoGAxov3W3ap0asJA6gGi_knuVFlh4K1CiFlboQow"
USERNAME     = "ProstoV_G11O_17"
REPO_ROOT    = "solutions"
SLEEP_SEC    = 1.5           # delay between API calls to avoid 429
# =======================================================

headers = {
    'Authorization': f'Bearer {BEARER_TOKEN}',
    'User-Agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36'
}

# -------------------------------------------------------
# Step 1 — get the full list of accepted problems
# -------------------------------------------------------
def fetch_accepted_problems():
    url = f"https://api.aiasoft.ge/{USERNAME}/problems?accepted=1"
    r = requests.get(url, headers=headers)
    if r.status_code != 200:
        print(f"❌ Could not fetch problem list. Status: {r.status_code}")
        return []
    problems = r.json().get('problems', [])
    print(f"📋 Found {len(problems)} accepted problems.\n")
    return problems

# -------------------------------------------------------
# Step 2 — find the accepted submission ID for a problem
# -------------------------------------------------------
def fetch_accepted_submission_id(problem_id):
    url = f"https://api.aiasoft.ge/problem/{problem_id}/submissions"
    r = requests.get(url, headers=headers)
    if r.status_code != 200:
        print(f"  ⚠️  Could not fetch submissions for problem {problem_id}. Status: {r.status_code}")
        return None

    submissions = r.json().get('submissions', [])
    for sub in submissions:
        if sub.get('verdict_en', '').lower() == 'accepted':
            return sub.get('id')

    return None

# -------------------------------------------------------
# Step 3 — fetch the actual source code
# -------------------------------------------------------
def fetch_code(submission_id):
    url = f"https://api.aiasoft.ge/submission?id={submission_id}"
    r = requests.get(url, headers=headers)
    if r.status_code == 200:
        return r.json().get('code', '')
    print(f"  ⚠️  Could not fetch code for submission {submission_id}. Status: {r.status_code}")
    return ''

# -------------------------------------------------------
# Step 4 — write sol.cpp into the existing folder
# -------------------------------------------------------
def write_solution(problem_id, title, code):
    padded = str(problem_id).zfill(3)   # 62 → "062", 587 → "587"
    folder_path = os.path.join(REPO_ROOT, f"{padded}.")

    if not os.path.exists(folder_path):
        print(f"  ⚠️  Folder not found: {padded}.  (skipping)")
        return

    sol_path = os.path.join(folder_path, "sol.cpp")

    # skip if already has real content
    if os.path.exists(sol_path):
        with open(sol_path, encoding="utf-8") as f:
            existing = f.read()
        if "your solution here" not in existing:
            print(f"  ⏭️  {padded}. already synced — skipping.")
            return

    header = (
        f"// AiaSoft #{padded} — {title}\n"
        f"// Complexity: O(?)\n"
        f"// Topics: <!-- Topic1, Topic2 -->\n\n"
    )
    with open(sol_path, "w", encoding="utf-8") as f:
        f.write(header + code)

    print(f"  ✅ {padded}. — {title}")

# -------------------------------------------------------
# Main
# -------------------------------------------------------
def main():
    problems = fetch_accepted_problems()
    if not problems:
        return

    for item in problems:
        problem_id = item.get('id')
        title      = item.get('title', 'Unknown')

        print(f"⬇️  #{str(problem_id).zfill(3)} — {title}")

        sub_id = fetch_accepted_submission_id(problem_id)
        time.sleep(SLEEP_SEC)

        if not sub_id:
            print(f"  ⚠️  No accepted submission found — skipping.")
            continue

        code = fetch_code(sub_id)
        time.sleep(SLEEP_SEC)

        if not code:
            print(f"  ⚠️  Empty code returned — skipping.")
            continue

        write_solution(problem_id, title, code)

    print("\n🎉 Done!")

if __name__ == "__main__":
    main()
