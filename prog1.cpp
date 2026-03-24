//Hello world in C++
 
/*#include<iostream>
using namespace std;
int main()
{
    int a=30;
    char m='k';
    float f=70.4;
    cout<<"the value of a="<<a<<"\nThe value of m="<<m<<"\nThe value of f="<<f;
    return 0;
}*/

#include<iostream> 

using namespace std;

int main(){

int a=2;

char m='k';

string name="manvi";

float f=60.3;

cout<<"\n enter the vaue of a,m,f,name:";

cin>>a>>m>>f;
cin.ignore();

getline(cin,name);

cout<<"Enter the value of a="<<a<<"\nEnter the value of m="<<m<<"\nEnter the vlaue of f="<<f;
cout<<"Enter the value of name="<<name;

return 0;

}