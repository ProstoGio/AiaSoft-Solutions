// AiaSoft #829 — კატო და საყვარელი სიმბოლოები
// Complexity: O(|S| * |K|)
// Topics: Strings, Implementation

#include <bits/stdc++.h>
using namespace std;

string tolow(string a){
    string b="";
    for(int i=0; i<a.size(); i++){
        b += char(tolower(a[i]));
    }
    return b;
}


int main() {
    
    string abra, favLets, abra2, favLets2;
    cin >> abra >> favLets;
    abra2 = tolow (abra);
    favLets2 = tolow (favLets);
    
    string favLets3="";
    favLets3+=favLets2[0];
    for(int i=1; i<favLets2.size(); i++){
        int h=0;
        for(int j=0; j<favLets3.size(); j++){
            if(favLets2[i] == favLets3[j]){
                h++;
                break;
            }
        }
        if(h == 0){
            favLets3+=favLets2[i];
        }
    }
    
    //cout<<favLets3<<endl;
    
    // cout<<"abra2: "<<abra2<<endl<<"favLets2: "<<favLets2<<endl;
    // cout<<"abra2.size(): "<<abra2.size()<<endl<<"favLets2.size(): "<<favLets2.size()<<endl;
    
    int cnt=0;
    for (int i = 0; i < favLets3.size(); i++){
        for(int j = 0; j < abra2.size(); j++){
            if(favLets3[i] == abra2[j])cnt++;
        }
        // cout<<cnt<<endl;
    }
    
    cout<<cnt;
    

    return 0;
}