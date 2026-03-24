#include <iostream>
#include <string>
using namespace std;
class Candy{
    string colour;
    int points;


     public:
     Candy();
     Candy(string clr);
     Candy(string clr,int pts);
     void setCandy(string,int);
     void displaycandy();
};
Candy::Candy(){
    colour="Black";points=0;
}
Candy::Candy(string clr)
{
    colour=clr;points=0;
}
Candy::Candy(string clr,int pts){
    colour=clr;points=pts;

}
void Candy:: displaycandy(){
    cout<<"\n colour:"<<colour;
    cout<<"\n points:"<<points;
}
int main(){
    Candy c1,c2("red",30);
    c2.displaycandy();
    c1.displaycandy();
    return 0;


}
