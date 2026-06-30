// AiaSoft #196 — სიმბოლოთა ამომცნობი
// Complexity: O(n)
// Topics: Implementation, Strings

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int digit1=0, bigsym2=0, smllsym3=0;
    string word;
    cin>>word;
    for(int i=0; i<word.size(); i++){
        if(isdigit(word[i]))digit1++;
        if(isupper(word[i]))bigsym2++;
        if(islower(word[i]))smllsym3++;
    }
    cout<<digit1<<" "<<bigsym2<<" "<<smllsym3;


    return 0;
}