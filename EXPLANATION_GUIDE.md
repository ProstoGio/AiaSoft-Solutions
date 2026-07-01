# AiaSoft Solutions — Explanation Writing Guide

This document defines how `explanation-en.md` and `explanation-ge.md` should be written for every problem.

---

## Files

```
NNN. პრობლემის სახელი/
├── explanation-en.md    ← your write-up and analysis, in English
└── explanation-ge.md    ← your write-up and analysis, in Georgian
```

This is the most important file pair in the folder. It's your voice — how you thought
about the problem, what clicked, and what others should understand before looking
at the code. Both language versions must cover the same content — same sections,
same level of depth — just written naturally in each language, not translated
word-for-word from one to the other.

---

## Humanization — write like a person, not a generator

This is the single most important rule in this guide. A reader should feel like
a real person who solved this problem is talking to them — not like text assembled
from a template. Concretely:

- **Vary sentence length and rhythm.** Don't make every sentence the same length or
  follow the same subject-verb-object pattern back to back. Mix short punchy sentences
  with the occasional longer one that has a natural pause.
- **Avoid AI-tell phrases.** Don't use: "It's important to note that...", "In conclusion...",
  "This problem requires us to...", "Let's dive into...", "Overall, this approach...".
  These read as generated filler, not someone explaining something they actually solved.
- **Skip robotic transitions.** Don't chain paragraphs with "Furthermore," "Additionally,"
  "Moreover," every single time. Real explanations jump between ideas more directly,
  sometimes with no connector at all.
- **Be specific, not generic.** "We loop through the array" is filler. "We walk through
  the array once, keeping a running XOR" tells the reader something. Specificity is what
  makes writing feel human — vague summary is what makes it feel generated.
- **Let opinion and personality show through.** It's fine to say a brute force is "the
  obvious first instinct" or that a trick "feels like a cheat code once you see it."
  A flat, neutral tone everywhere is a giveaway.
- **Don't over-explain basics.** If the audience already codes in C++, you don't need
  to explain what a for-loop is. Trust the reader; explain the *non-obvious* part, not
  everything.
- **One imperfection is fine.** Real explanations aren't perfectly symmetric — not every
  section needs to be the same length, not every bullet list needs exactly 3 items.

---

## Tone and Voice — English version

- **Conversational but precise.** Not academic, not overly casual.
- Use "we" or "you" — avoid passive voice ("it can be observed that...").
- Short sentences. If a sentence needs two commas, split it.
- It's fine to say "I" when sharing personal insight: *"I initially tried X but it failed because..."*

## Tone and Voice — Georgian version (explanation-ge.md)

- Write naturally in Georgian, the way a Georgian CS student would actually explain
  it to a friend — not a stiff word-for-word translation of the English version.
- Keep technical terms that don't have a natural Georgian equivalent in English/transliterated
  form where that's how Georgian programmers actually say them (e.g. "XOR ოპერაცია",
  "O(n log n) სირთულე", "for ციკლი"). Don't force-translate algorithm names.
- Use "ჩვენ" (we) or direct address — match the same conversational register as the English version.
- Same sentence-length discipline: short, clear sentences over long compound ones.
- Avoid stiff, overly formal Georgian constructions that read like a textbook translation
  (e.g. don't default to heavy passive/impersonal forms). Write the way someone would
  actually explain it out loud to a groupmate, not how a formal document would phrase it.

---

## Required Sections (both languages, same structure)

### Approach / მიდგომა

The heart of the file. Explain your solution strategy in plain language before
showing any code. Walk through the reasoning step by step. If you considered
multiple approaches, briefly mention them and explain why you went with this one.

Aim for 3–8 sentences. Don't just restate the algorithm name — explain *why* it works here.

**Good (EN):** *"Since we only care about whether each bit is set independently across all numbers,
we can process each bit position separately. XOR naturally cancels out pairs,
so any number appearing an odd number of times will survive."*

**Bad (EN):** *"I used XOR. XOR is a bitwise operation. The answer is the XOR of all elements."*

### Complexity / სირთულე

Always include both time and space. Use a table — identical structure in both files,
just translated labels:

```markdown
| | |
|-|--|
| Time | O(n) |
| Space | O(1) |
```

```markdown
| | |
|-|--|
| დრო | O(n) |
| მეხსიერება | O(1) |
```

### Key Insights / მთავარი დაკვირვებები

1–3 bullet points. The "aha" moments. What would have saved you time if you knew
it going in? What's the non-obvious part of this problem?

Keep each bullet to 1–2 sentences max.

```markdown
## Key Insights

- XOR of a number with itself is always 0, which is why duplicates cancel out.
- The order of input doesn't matter — XOR is commutative and associative.
```

### Common Mistakes / ხშირი შეცდომები *(optional but recommended)*

Add this section if you made a mistake, or if the problem has a well-known trap.
1–3 bullets, same style as Key Insights.

```markdown
## Common Mistakes

- Forgetting that the result can be 0 (when all numbers appear twice).
- Using int instead of long long when constraints allow values up to 10⁹.
```

### Walkthrough / ნაბიჯ-ნაბიჯ ახსნა *(optional)*

Add this for Medium/Hard problems or when the approach needs a concrete example
to really land. Trace through one of the sample inputs manually, step by step.

```markdown
## Walkthrough

Input: `3 1 4 1 5 9 2 6 5 3 5`

Running XOR through all elements:
- Start: 0
- XOR 3 → 3
- XOR 1 → 2
- XOR 4 → 6
- XOR 1 → 7  (the 1 cancels out)
- ...
- Final: 5  ← the answer
```

---

## Full Templates

**explanation-en.md:**
```markdown
# Explanation — NNN. <problem name>

## Approach

<!-- 3–8 sentences explaining your strategy in plain language -->

## Complexity

| | |
|-|--|
| Time | O(?) |
| Space | O(?) |

## Key Insights

- <!-- first key insight -->

## Common Mistakes

- <!-- optional -->

## Walkthrough

<!-- optional: trace through a sample input step by step -->
```

**explanation-ge.md:**
```markdown
# განმარტება — NNN. <პრობლემის სახელი>

## მიდგომა

<!-- ახსენით თქვენი სტრატეგია მარტივ ენაზე -->

## სირთულე

| | |
|-|--|
| დრო | O(?) |
| მეხსიერება | O(?) |

## მთავარი დაკვირვებები

- <!-- პირველი დაკვირვება -->

## ხშირი შეცდომები

- <!-- არასავალდებულო -->

## ნაბიჯ-ნაბიჯ ახსნა

<!-- არასავალდებულო: გაიარეთ მაგალითი ნაბიჯ-ნაბიჯ -->
```

---

## Checklist

Before considering an explanation pair done, verify:

- [ ] `explanation-en.md` — Approach section is written in your own words
- [ ] `explanation-en.md` — Complexity table is filled in
- [ ] `explanation-en.md` — Key Insights has at least one bullet
- [ ] `explanation-ge.md` — covers the same content as the English version, written naturally
- [ ] `explanation-ge.md` — Complexity table is filled in
- [ ] Georgian version doesn't force-translate algorithm/technical terms unnaturally
