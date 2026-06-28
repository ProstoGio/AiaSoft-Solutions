// AiaSoft #573 — სუნთქვა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%4==2 || n%4==3){
        cout<<"Breathe in";
    }
    else{
        cout<<-1;
    }

    return 0;
}
