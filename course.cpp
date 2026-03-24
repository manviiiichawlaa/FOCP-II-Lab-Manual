#include <iostream>

#include <string>

using namespace std;


class Course

{

public:

string courseName;

string InstructorName;

int CourseDuration;

Course(string C, string I, int D);

void displayDetails();

~Course();

};

Course::Course(string C, string I, int D)

{

courseName = C;

InstructorName=I;

CourseDuration=D;

}

void Course::displayDetails()

{

cout<<"\n course name is :"<<courseName;

cout<<"\n Instructor name is :"<<InstructorName;

cout<<"\n course duration is :"<<CourseDuration<<" weeks";

}

Course::~Course(){

cout<<"\n object destroyed";

}

int main(){

Course c1("MUSIC","Mr.garg",7);

c1.displayDetails();

return 0;

}