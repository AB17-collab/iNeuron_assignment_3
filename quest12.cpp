#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an alphabet:";
    cin>>ch;
    if(ch>='a' && ch<='z')
        cout<<"The alphabet is in lowercase";
    else
        cout<<"The alphabet is in uppercase";

    return 0;
}