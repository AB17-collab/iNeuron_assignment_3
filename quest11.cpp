#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of subjects:";
    cin>>n;
    int arr[n];
    cout<<"Enter the marks for the subjects:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int j=0;j<n;j++){
        sum += arr[j];
    }
    int avg = sum/n;
    if(avg>33)
        cout<<"Passed";
    else
        cout<<"Failed";

    return 0;
}