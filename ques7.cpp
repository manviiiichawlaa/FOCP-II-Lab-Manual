#include<iostream> 

using namespace std;

int main(){

float a,b,c;

cout<<"Enter the value of a,b,c:";

cin>>a>>b>>c;

if (a > b && a > c)

cout << "Player 1 is ahead";

else if (b > a && b > c)

cout << "Player 2 is ahead";

else if (c > a && c > b)

cout << "Player 3 is ahead";

else

cout << "It's a tie";


return 0;

}