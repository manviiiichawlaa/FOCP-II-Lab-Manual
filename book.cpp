#include <iostream>
#include <string>
using namespace std;
class Book{
    public:
    string title;
    string author;
    double price;

    void inputDetails()
{
    cin.ignore();

    cout<<"\n  enter title";
    getline(cin,title);
    cout<<"\n enter author";
    getline(cin,author);
    cout<<"\n enter the price";
    cin>>price;

}

void displayDetails()
{
    cout<<"\n Book Details \n";
    cout<<"Title "<< title<< endl;
    cout<<"Author"<<author<<endl;
    cout<<"Price"<<price<<endl;
}
};
int main()
{
    Book b1;
    b1.inputDetails();
    b1.displayDetails();
    return 0;
}


