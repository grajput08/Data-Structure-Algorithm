/*

Pattern 11: Print a full pyramid pattern

For Asterisks:

    *
   ***
  *****
 *******
*********

For Numeric:

    1
   123
  12345
 1234567
123456789


For Alphabet:

    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI



num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions:

    r0 -> 4 space, 1*
    r1 -> 3 space, 3*
    r3 -> 2 space, 5*
    r4 -> 1 space, 7*
    r5 -> 0 space, 9*

    condition:

    space: num - row -1
    star: 2* row + 1

*/

#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    // For Asterisks:
    for (int row = 0; row < num; row = row + 1)
    {
        for (int col = 0; col < num - row - 1; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {

            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // For Numeric:
    for (int row = 0; row < num; row = row + 1)
    {
        for (int col = 0; col < num - row - 1; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {

            cout << col + 1;
        }
        cout << endl;
    }

    cout << endl;

    // For Alphabet:
    for (int row = 0; row < num; row = row + 1)
    {
        for (int col = 0; col < num - row - 1; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {
            char ch = col + 'A';
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}