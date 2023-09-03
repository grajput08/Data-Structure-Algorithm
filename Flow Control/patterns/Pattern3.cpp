/*

Pattern 3: Print a hollow square pattern of asterisks

*****
*   *
*   *
*   *
*****

num = 5

Rules:
1. find number of rows -> num (Outer loop )
2. write down for rows and conditions: num (Inner loop )

        conditions:

        if (row == 0 || row == num - 1)
            {
                cout << "*";
            }
            else
            {
                if (col == 0 || col == num - 1)
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
    int num = 5;
    for (int row = 0; row < num; row = row + 1)
    {
        for (int col = 0; col < num; col = col + 1)
        {
            if (row == 0 || row == num - 1)
            {
                cout << "*";
            }
            else
            {
                if (col == 0 || col == num - 1)
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