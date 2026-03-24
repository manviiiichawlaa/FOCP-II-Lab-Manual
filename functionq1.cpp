#include <iostream>
using namespace std;
int sum(int,int);
float sum(float,float);
double sum(double,double);

int main() {
cout<<sum(5,10);
cout<<sum(5.25,10.28);
cout<<sum(5.2869,10.2854);
return 0;
}

int sum(int n1,int n2)
{
    cout<<"int method";
    return n1+n2;
}

float sum(float n1,float n2)
{
    cout<<"float method";
    return n1+n2;
}

double sum(double n1,double n2)
{
    cout<<"double method";
    return n1+n2;
}