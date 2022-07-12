#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers:";
    cin>>a>>b>>c;
    int greater = a>=b?(a>=c?a:c):(b>=c?b:c);
    cout<<greater;
    return 0;
}