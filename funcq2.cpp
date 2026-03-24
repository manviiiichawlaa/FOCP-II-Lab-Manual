#include <iostream>
using namespace std;
int result(int a,int b)
{
    cout<<"result of 2 subjects";
    return a+b;
}
int result(int a,int b,int c)
{ 
    cout<<"result of 3 subjects";
    return a+b+c;
}
int result(int a,int b,int c,int d)
{
    cout<<"result of 4 subjects";
    return a+b+c+d;
}
int result(int a,int b,int c,int d,int e)
{
    cout<<"result of 5 subjects";
    return a+b+c+d+e;
}
int main()
{
    cout<<result(45,58)<<endl;
    cout<<result(57,68,95)<<endl;
    cout<<result(78,49,65,77)<<endl;
    cout<<result(47,69,84,56,75)<<endl;
}
