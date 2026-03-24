#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for(int i = 1; i <= n; i++)
    {
        // spaces
        for(int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        // increasing numbers
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // decreasing numbers (start from i)
        for(int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}