/*

Pattern 5: Print a  half pyramid  pattern of asterisks

*
**
***
****
*****

num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions: row+1

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

            cout << "*";
        }
        cout << endl;
    }
    return 0;
}