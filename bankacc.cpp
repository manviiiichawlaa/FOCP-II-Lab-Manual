
#include<iostream>
#include<string>
using namespace std;
class BankAccount{

public:

string accountHolderName;
int accountNumber;
double balance;


void inputDetails(){

cout<<"\n enter acc no:";
cin>>accountNumber;
cin.ignore();
cout<<"\n Enter name of acc holder:";

getline(cin, accountHolderName);
cout<<"\n enetr the balance:";
cin>>balance;

}


void displayDetails(){

cout<<"\n accountHolderName"<<accountHolderName;
cout<<"\n accountNumber"<<accountNumber;
cout<<"\n balance"<<balance;

}


void deposit(double amount){

balance=balance+amount;
cout<<"\n Deposited successfully & current balance : "<<balance;

}


void withdraw(double amount) {

if (amount > 0 && amount <= balance) {
balance = balance - amount;
cout << "\nAmount withdrawn successfully & current balance : " <<balance<< endl;

} 

else if (amount > balance) {
cout << "Insufficient balance." << endl;

} 

else {
cout << "Invalid withdrawal amount." << endl;

}

}

};


int main(){

BankAccount B1;

B1.inputDetails();
B1.displayDetails();
B1.withdraw(5000);
B1.deposit(2000);

return 0;

}


