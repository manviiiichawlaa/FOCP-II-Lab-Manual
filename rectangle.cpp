#include <iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float width;
    public:
    void inputDimensions(){
        cout<<"enter length";
        cin>>length;
        cout<<"enter width";
        cin>>width;
    }
    float calculateArea(){
    return length*width;
    }
    float  calculatePerimeter()
{
    return 2 * (length+width);
}
void displayResult(){
    cout<<"Area"<< calculateArea() <<endl;
    cout<<"Perimeter"<<calculatePerimeter() <<endl;
}

};
int main(){
    Rectangle rect;
    rect.inputDimensions();
    rect.displayResult();
    return 0;

}