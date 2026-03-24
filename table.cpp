#include <iostream>

#include <string>
using namespace std;

class Table{

public:

int price;

int numberoflegs;

string material;


Table();

Table(string, int);

Table(string,int,int);

void displayDetails();

};

Table::Table(){

price=5000;

material="wood";

numberoflegs=4;

}

Table::Table(string m,int p){

material=m;

price=p;

}

Table::Table(string m ,int p,int n){

material=m,

price=p;

numberoflegs=n;}


void Table::displayDetails()
{

cout<<"\n details are:";

cout<<"\n material is:"<<material;

cout<<"\n number of legs:"<<numberoflegs;

cout<<"\n price is:"<<price;

}


int main(){

Table t1,t2("steel",6000),t3("wood",600,5);

t1.displayDetails();

t2.displayDetails();

t3.displayDetails();

return 0;

}