/*

Pattern 4: Print a hollow Reactangle pattern of asterisks

*****
*   *
*   *
*   *
*   *
*****

Length = 6
Breadth = 5

Rules:
1. find number of rows -> Lenght (Outer loop )
2. write down for rows and conditions: Breadth (Inner loop )

        conditions:

        if (row == 0 || row == l - 1)
            {
                cout << "*";
            }
            else
            {
                if (col == 0 || col == b - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

*/

#include <iostream>
using namespace std;

int main()
{
    int l = 6;
    int b = 5;
    for (int row = 0; row < l; row = row + 1)
    {
        for (int col = 0; col < b; col = col + 1)
        {
            if (row == 0 || row == l - 1)
            {
                cout << "*";
            }
            else
            {
                if (col == 0 || col == b - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}