#include <iostream>
using namespace std;

int main(){
//Declare the variables    
    int sellingprice,buyingprice,profit;
    
 // Prompt for user input   
    cout<<"Enter the buying price of the car";
    cin>>buyingprice;
    cout<<"Enter selling price of the car";
    cin>>sellingprice;
// Calculate the profit
    profit=sellingprice-buyingprice;
    cout<<"The selling price of selling the car is ="<<sellingprice<<endl; 
    cout<<"The buying price of selling the car is ="<<buyingprice<<endl; 
    cout<<"The profit of selling the car is ="<<profit<<endl;    
    return 0;

}