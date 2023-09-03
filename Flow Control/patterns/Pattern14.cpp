/*

Pattern 12: Print a hollow diamond  pattern

For Asterisks:

    *
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *

For Numeric:

    1
   1 3
  1   5
 1     7
1       9
1       9
 1     7
  1   5
   1 3
    1


For Alphabet:

    A
   A C
  A   E
 A     G
A       I
A       I
 A     G
  A   E
   A C
    A



num = 10

Rules:
1. find number of rows -> num
2. write down for rows and conditions:

    condition:

    Outer Loop: num/2

    Inner Loop:

        for first Half:

            space: num / 2 - row - 1;
            star:
                num/2 - 2 * row -1
                if(col == 0 || col == 2 * row){
                    cout<<"*"
                }else{
                    cout<<" "
                }

        for Second Half:

            space: num / 2;
            star:
                num - 2 * row -1
                if(col == 0 || col == num - 2 * row - 2){
                        cout<<"*"
                    }else{
                        cout<<" "
                    }

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
            if (col == 0 || col == 2 * row)
                cout << "*";
            else
                cout << " ";
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

            if (col == 0 || col == num - 2 * row - 2)
                cout << "*";
            else
                cout << " ";
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

            if (col == 0 || col == 2 * row)
                cout << col + 1;
            else
                cout << " ";
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

            if (col == 0 || col == num - 2 * row - 2)
                cout << col + 1;
            else
                cout << " ";
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
            if (col == 0 || col == 2 * row)
            {
                char ch = col + 'A';
                cout << ch;
            }
            else
                cout << " ";
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
            if (col == 0 || col == num - 2 * row - 2)
            {
                char ch = col + 'A';
                cout << ch;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}