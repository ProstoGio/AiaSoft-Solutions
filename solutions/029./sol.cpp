// AiaSoft #029 — ნულების ჯგუფები
// Complexity: O(n)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int num;
    cin>>num;
    int quanity=0;
    int mainquanity=0;

    for(int i=0; i<num; i++){
        int n2;
        cin>>n2;

        if(n2==0)quanity++;
        else{
            if(quanity>mainquanity)mainquanity=quanity;
            quanity=0;
        }
    }

    if(quanity>mainquanity){
        mainquanity=quanity;
    }

    cout<<mainquanity;

    return 0;
}