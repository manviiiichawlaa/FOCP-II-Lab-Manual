#include <iostream>
using namespace std;
class Smartlight{
    string brand;
    int brightness;
    bool isOn;
    public:
    Smartlight(){
        brand="unknown";
        brightness=50;
        isOn=false;
    }
    Smartlight(string b,int br,bool state){
        brand=b;
        brightness=(br>=0&&br<=100)?br:50;
        isOn=state;
    }
    void turnOn(){
        isOn=true;
    }
    void turnOff(){
        isOn=false;
    }
    void increaseBrightness(){
        if(brightness<100)
        brightness+=10;
    }
    void decreasebrightness(){
        if(brightness>0)
        brightness-=10;
    }
    void displayStatus() {
        cout << "\nBrand: " << brand
             << "\nState: " << (isOn ? "ON" : "OFF")
             << "\nBrightness: " << brightness << endl;
    }

     ~Smartlight() {
        cout << "Object destroyed\n";
    }
};

int main() {
    Smartlight light1;
    Smartlight light2("Philips", 70, true);

    light1.turnOn();
    light1.increaseBrightness();
    light1.displayStatus();

    light2.decreasebrightness();
    light2.turnOff();
    light2.displayStatus();

    return 0;
}
