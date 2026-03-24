#include <iostream>
#include <string>
using namespace std;

class ElectricityBill
{
private:
    string consumerName;
    int units;
    float billAmount;

public:
    // Default Constructor
    ElectricityBill()
    {
        consumerName = "Not Assigned";
        units = 0;
        billAmount = 0;
    }

    // Parameterized Constructor
    ElectricityBill(string name, int u)
    {
        consumerName = name;
        units = u;
        billAmount = 0;
    }

    // Function to calculate bill
    void calculateBill()
    {
        if (units <= 100)
        {
            billAmount = units * 5;
        }
        else if (units <= 200)
        {
            billAmount = (100 * 5) + ((units - 100) * 7);
        }
        else
        {
            billAmount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }
    }

    // Function to display bill details
    void displayBill()
    {
        cout << "\nConsumer Name: " << consumerName;
        cout << "\nUnits Consumed: " << units;
        cout << "\nTotal Bill Amount: Rs. " << billAmount << endl;
    }
};

int main()
{
    // Object using default constructor
    ElectricityBill bill1;

    // Object using parameterized constructor
    ElectricityBill bill2("Manvi", 250);

    // Calculating and displaying bills
    cout << "Default Constructor Object:";
    bill1.calculateBill();
    bill1.displayBill();

    cout << "\n\nParameterized Constructor Object:";
    bill2.calculateBill();
    bill2.displayBill();

    return 0;
}