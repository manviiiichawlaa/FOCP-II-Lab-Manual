#include <iostream>
using namespace std;
int main()
{
int items;
float price,total,discount =0;
cout<< "enter no of items: ";
cin>> items;

cout<< "enter price of items: ";
cin>> price;
total=items*price;
if(items>1000)
{
discount=total*0.10;
total=total-discount;
}
cout<<"total expense after discount:"<<total << endl;

return 0;
}