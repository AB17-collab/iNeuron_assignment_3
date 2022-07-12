#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the coefficients of x^2 and x and the constant:";
    cin>>a>>b>>c;
    int Discriminant = b*b - (4*a*c);
    if(Discriminant==0)
        cout<<"Roots are real and identical";
    else if(Discriminant>0)
        cout<<"Roots are real and non-identical";
    else
        cout<<"Roots are imaginary";
    
    return 0;
}