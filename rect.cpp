#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int width;
    public:
    Rectangle()
    { length=0;width=0;}
    Rectangle(int l,int w)
    {length=l;width=w;}
    void display()
    {cout<<"\n length= "<<length;
    cout<<"\n width= "<<width;
    }
    friend void Area(Rectangle);
    };
    void Area(Rectangle obj)
    {
        cout<<"\n Area= "<< obj.length * obj.width;
    } 
    int main()
    {
        Rectangle r1,r2(23,45);
        r1.display();
        Area(r1);
        r2.display();
        Area(r2);
        return 0;
    }