#include <iostream>
using namespace std;
class shape{
    public:
    shape(){cout<<"\n shape default const called";}
    virtual void area()
    {cout<<"\n no dim no area";}
    void display(){
        cout<<"\n we are 2 d shaped";
    }
};
class Rectangle:public shape 
{
    public:
    int length;int width;
    Rectangle(int l=5,int w=10):length(l),width(w)
    {
        cout<<"\n Rectangle object created ";
    }
    void area()
    {
        cout<<"\n area="<<length*width;
    }
};
int main(){
    shape*s1,s2;
    Rectangle r2(50,42);
    s1=&s2;
    s1->area();
    s1=&r2;
    s1->area();
    s2.area();
    return 0;
}
