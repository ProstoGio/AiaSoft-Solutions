# სიმრავლეების სიხშირის განსაზღვრის ლოგიკა

ამ ამოცანაზე მუშაობისას მივხვდი, რომ მთავარი სირთულე არის არა სიხშირის დათვლა, არამედ იმის გარკვევა, თუ როდის არის ორი სიმრავლე ერთმანეთის ტოლი. ჩემი იდეა იყო, რომ სიმრავლეები დაგველაგებინა მათი ელემენტების სიგრძის მიხედვით, თან ეს გაგვეკეთებინა რეკურსიულად, ყოველ სიღრმეზე.

## ალგორითმი

### 1. ქვეელემენტების ამოღება (`sol` ფუნქცია)
პირველ რიგში, შევქმენი ფუნქცია `sol`, რომელიც გადაცემული სტრიქონიდან ქვეელემენტებს ანცალკევებს:

```cpp
vector<string> sol(string s) {
    vector<string> l;
    string temp = "";
    for(int i = 1; i < s.size() - 1; i++) {
        if(s[i] == '{') { st.push('{'); temp += '{'; }
        else if(s[i] == '}') { st.pop(); temp += '}'; }
        else temp += s[i];
        if(st.empty()) { l.push_back(temp); temp = ""; }
    }
    return l;
}
```

### 2. დალაგება (srt ფუნქცია)
srt-ით ვალაგებ ამ ქვეელემენტებს რეკურსიულად:

```cpp
void srt(string &str) {
    vector<string> v = sol(str);
    stable_sort(v.begin(), v.end(), [](const string &a, const string &b) {
        return a.length() < b.length();
    });
    for(int i = 0; i < v.size(); i++) {
        if(v[i].size() > 2) srt(v[i]);
    }
    string tmp = "{";
    for(const auto &s : v) tmp += s;
    tmp += '}';
    str = tmp;
}
```

### 3. სიხშირის დათვლა
ბოლოს კი map-ის გამოყენებით მარტივად ვითვლით სიხშირეს:
```cpp
for(int i = 0; i < lst.size(); i++) srt(lst[i]);

map<string, int> m;
for(auto &x : lst) m[x]++;

int answer = 0;
for(auto &x : lst) answer = max(answer, m[x]);
```
