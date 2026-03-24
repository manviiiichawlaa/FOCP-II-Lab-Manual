#include <iostream>

using namespace std;


class person{

string name; int age;

public:

person(){

cout<<"\n person default constuctor";name="default";age=18;

}

person(string nm,int ag){

cout<<"\n person parametarized constuctor";

name=nm;age=ag;

}

void display(){

cout<<"\n name = "<<name<<"\n age= "<<age;

}

};

class Student : public person{

string rollNo;

public:

Student()

{

cout<<"\n student default constuctor";rollNo="25csu115";

}

Student(string na,int ag,string rno):person(na,ag){

cout<<"\n student parametarized ";

rollNo=rno;

}

void display_student(){

display();

cout<<"\n rollno= "<<rollNo;

}

};

int main(){

Student p1,p2("abcd",23,"25csu111");

p1.display();

p1.display_student();

p2.display_student();

return 0;

}