/*

Pattern 12: Print a diamond pattern pattern

For Asterisks:

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

For Numeric:

    1
   123
  12345
 1234567
123456789
123456789
 1234567
  12345
   123
    1


For Alphabet:

    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A



num = 10

Rules:
1. find number of rows -> num
2. write down for rows and conditions:

    condition:

    Outer Loop: num/2

    Inner loop:

        for first Half:

            space: num / 2 - row - 1
            star: 2 * row + 1

        for Second Half:

            space: row
            star:  num - 2 * row - 1

*/

#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    // For Asterisks:

    // For First Half
    for (int row = 0; row < num / 2; row = row + 1)
    {
        for (int col = 0; col < num / 2 - row - 1; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {

            cout << "*";
        }
        cout << endl;
    }

    // For Second Half
    for (int row = 0; row < num / 2; row = row + 1)
    {
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < num - 2 * row - 1; col = col + 1)
        {

            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // For Numeric:

    // For First Half
    for (int row = 0; row < num / 2; row = row + 1)
    {
        for (int col = 0; col < num / 2 - row - 1; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {

            cout << col + 1;
        }
        cout << endl;
    }

    // for second Half
    for (int row = 0; row < num / 2; row = row + 1)
    {
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < num - 2 * row - 1; col = col + 1)
        {

            cout << col + 1;
        }
        cout << endl;
    }

    cout << endl;

    // For Alphabet:

    // For First Half
    for (int row = 0; row < num / 2; row = row + 1)
    {
        for (int col = 0; col < num / 2 - row - 1; col = col + 1)
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
    //  for Seconf Half
    for (int row = 0; row < num / 2; row = row + 1)
    {
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        for (int col = 0; col < num - 2 * row - 1; col = col + 1)
        {
            char ch = col + 'A';
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}