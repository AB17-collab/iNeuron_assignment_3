#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter two numbers: ";
    cin>>n>>m;
    if(n!=m){
        int greater = n>m?n:m;
        cout<<greater;
    }
    else
        cout<<n;

    return 0;

}