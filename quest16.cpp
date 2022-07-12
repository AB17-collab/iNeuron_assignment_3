#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    if((ch>=32 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=126))
        cout<<"It's a special character"; 
    else if(ch>=65 && ch<=90){
        cout<<"It's an uppercase character";
    }
    else if(ch>=97 && ch<=122)
        cout<<"It's a lowercase character";
    else
        cout<<"It's a number";

    return 0;
}