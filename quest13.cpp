#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%6==0)
        cout<<"The number is divisible by both 2 and 3.";
    else
        cout<<"The number is not divisible by both 2 and 3.";

    return 0;
}