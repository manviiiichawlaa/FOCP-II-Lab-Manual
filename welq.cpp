#include <iostream>
using namespace std;

void welcome(string="agent",string="");
int main()
{
    welcome();
    welcome("manvi");
    welcome("manvi","chawla");
    return 0;

}

void welcome(string fname,string lname)
{
    cout<<"\n welcome"<<fname<<lname; 
}