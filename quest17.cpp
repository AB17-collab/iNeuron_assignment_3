#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three sides of a triangle:";
    cin>>a>>b>>c;
    if(a+b>c || a+c>b || b+c>a)
        cout<<"Valid";
    else
        cout<<"Not Valid";

    return 0;
}