#include<iostream>
using namespace std;
class Temperature
{
    float celsius;
    public:
    void inputTemperature();
    float convertToFahrenheit();
    void displayResult();
};
   void Temperature::inputTemperature(){
    cout<<"enter celsius: ";
    cin>>celsius;
   }
   float Temperature::convertToFahrenheit(){
    return ((celsius*9.0/5.0)+32);
   }
   void Temperature::displayResult(){
    cout<<"Farenheit temperature is: "<<convertToFahrenheit();
   }
int main(){
    Temperature t1;
    t1.inputTemperature();
    t1.convertToFahrenheit();
    t1.displayResult();
    return 0;
}