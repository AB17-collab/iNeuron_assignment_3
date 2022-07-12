#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%7==0 || n%3==0)
        cout<<"The number is divisible by either 7 or 3 or both";
    else
        cout<<"The number is neither divisible by 7 nor 3";

    return 0;
}