/*

Pattern 1: Print a Square pattern of asterisks

*****
*****
*****
*****
*****

*/

#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    for (int row = 0; row < num; row = row + 1)
    {
        for (int col = 0; col < num; col = col + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}