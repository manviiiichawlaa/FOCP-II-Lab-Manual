//  A shopkeeper wants to calculate the total bill amount 
//  after applying a 20% discount on the purchase.
// Implement a solution to accept item no., quantity, and unit price.
//  Compute the amount and apply 20% discount

#include<iostream>
using namespace std;

int main(){
int item_no,quantity;
float unit_price,amount,final;
cout<<"enter item no. , quantity , unit price : ";
cin>>item_no>>quantity>>unit_price;

amount=unit_price*quantity;
final=(amount*80)/100;

cout<<"amount : "<<amount;
cout<<"\nfinal amount after discount : "<<final;

return 0;
}