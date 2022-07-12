#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> um;
    um["January"] = 31;
    um["Feb"] = 28;
    um["March"] = 31;
    um["April"] = 30;
    um["May"] = 31;
    um["June"] = 30;
    um["July"] = 31;
    um["August"] = 31;
    um["September"] = 30;
    um["October"] = 31;
    um["November"] = 30;
    um["December"] = 31;
    string month;
    cout<<"Enter the month: ";
    cin>>month;
    cout<<"The number of days in the month:"<<um[month];
    return 0;
}