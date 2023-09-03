/*

Pattern 15: Print a butterfly pattern

*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *


num = 5

*/
#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    for (int row = 0; row < num; row = row + 1)
    {

        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "* ";
        }
        for (int col = 0; col < 2 * (num - row - 1); col = col + 1)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
        if (row == num - 1)
        {
            for (int col = 0; col < 2 * (num); col = col + 1)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    for (int row = 0; row < num; row = row + 1)
    {

        for (int col = 0; col < num - row - 1; col = col + 1)
        {
            cout << "* ";
        }
        for (int col = 0; col < 2 * (row + 1); col = col + 1)
        {
            cout << "  ";
        }
        for (int col = 0; col < num - row - 1; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}