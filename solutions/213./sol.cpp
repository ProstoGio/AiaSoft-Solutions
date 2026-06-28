// AiaSoft #213 — სიმბოლოს გარდაქმნა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {

  int n; 
  cin>>n;
  char sym[n];
  for(int i=0;i<n;i++){
    cin>>sym[i];  
  } 
  for(int i=0;i<n;i++){
      cout<<char(sym[i]+32)<<" ";
  }  

    return 0;
}