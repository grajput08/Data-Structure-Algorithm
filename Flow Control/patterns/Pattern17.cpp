/*

Pattern 16: Print palindrome pyramid pattern using numbers

*******1********

*******2*2*******

******3*3*3******

*****4*4*4*4*****

****5*5*5*5*5****

num = 5

*/
#include <iostream>
using namespace std;

int main()
{

    int num = 7;

    for (int row = 1; row <= num; row = row + 1)
    {

        for (int col = 0; col <= 2 * num - row - 2; col = col + 1)
        {

            cout << "*";
        }
        for (int col = 0; col < row; col = col + 1)
        {

            cout << row;
            if (col != row || col != 1)
            {
                cout << "*";
            }
        }
        for (int col = 1; col <= 2 * num - row - 2; col = col + 1)
        {

            cout << "*";
        }
        cout << endl;
    }

    return 0;
}