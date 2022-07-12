#include<iostream>
using namespace std;
int main(){
    int costPrice,sellingPrice;
    cout<<"Enter the cost price and the selling price of the product:";
    cin>>costPrice>>sellingPrice;
    if(costPrice>sellingPrice){
        int loss = costPrice-sellingPrice;
        cout<<"The loss Percentage is:"<<((loss*100)/costPrice)<<"%";
    }
    else if(sellingPrice>costPrice){
        int profit = sellingPrice-costPrice;
        cout<<"The profit Percentage is:"<<((profit*100)/costPrice)<<"%";
    }
    else{
        cout<<"There has been no profit or loss";
    }

    return 0;
}