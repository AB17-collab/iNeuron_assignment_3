#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check if it's a 3 digit number:";
    cin>>n;
    string k = to_string(n);
    if(k.length()==3)
        cout<<"It's a 3 digit number"; 
    else
        cout<<"It's not a 3 digit number";

    return 0;
}