#include <iostream>
using namespace std;
class student{
    int rollno;
    string name;
    int marks1;
    int marks2;
    int marks3;
    int calculateTotal()
    { 
        return(marks1+marks2+marks3);
       }

    public:
    void inputDetails()
    {
        cout<<"enter rollno,name,marks1,marks2,marks3";
        cin>>rollno>>name>>marks1>>marks2>>marks3;

    }
    void displayDetails()
    {
        cout<<"\n name:"<<name<<"\n rollno :"<<rollno;
        cout<<"\nmarks1:"<<marks1<< "\n marks2:"<<marks2<<" \n marks3:"<<marks3;
        cout<<"\ntotal :"<<calculateTotal();
    }
};
int main(){
    student s1;
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}