/*

Pattern 12: Print a inverted pyramid pattern

For Asterisks:

*********
 *******
  *****
   ***
    *

For Numeric:

123456789
 1234567
  12345
  123
   1


For Alphabet:

ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A



num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions:

    r0 -> 0 space, 9*
    r1 -> 1 space, 7*
    r2 -> 2 space, 5*
    r3 -> 3 space, 3*
    r4 -> 4 space, 1*

    condition:

    space: row
    star: 2* num - 2 * row -1

*/

#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    // For Asterisks:
    for (int row = 0; row < num; row = row + 1)
    {
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * num - 2 * row - 1; col = col + 1)
        {

            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // For Numeric:
    for (int row = 0; row < num; row = row + 1)
    {
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * num - 2 * row - 1; col = col + 1)
        {

            cout << col + 1;
        }
        cout << endl;
    }

    cout << endl;

    // For Alphabet:
    for (int row = 0; row < num; row = row + 1)
    {
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * num - 2 * row - 1; col = col + 1)
        {
            char ch = col + 'A';
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}