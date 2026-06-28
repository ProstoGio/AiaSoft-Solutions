// AiaSoft #813 — სიმეტრიულის გამყოფები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() { 
    
    int num, reversed_num=0, divisor_counter=0; 
    cin>>num;
    while(num>0){
        reversed_num=reversed_num*10+num%10;
        num=num/10;
    }
    for(int i=1; i<=sqrt(reversed_num); i++){
        if(reversed_num%i==0){
            divisor_counter++;
            if (i!=sqrt(reversed_num)) {
                divisor_counter++;
            }
        }
    }
    cout<<reversed_num<<" "<<divisor_counter<<endl;
}