#include<iostream>

#include<string>

using namespace std;


class Volume{

private:

float length,breadth,height,side,radius;

public:

char choice;

void inputdetails(){

side=3;

length=4;

radius=5;

breadth=4;

height=6;}

float cube(){

return side*side*side;

}

float cuboid(){

return length*breadth*height;

}

float cylinder(){

return 3.14*radius*radius*height;

}

void display(){

cout<<"\n ENTER YOUR CHOICE A,B & C:";

cin>>choice;

if (choice=='A'){

cout<<"\n vloume of the cube is :"<<cube();

}

else if(choice=='B'){

cout<<"\n vloume of the cuboid is :"<<cuboid();

}

else if (choice=='C'){

cout<<"\n vloume of the cylinder is :"<<cylinder();

}

}

};

int main(){

Volume v1,v2,v3;

v1.inputdetails();

v1.display();

}