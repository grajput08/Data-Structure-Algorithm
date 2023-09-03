/*

Pattern 2: Print a Rectangle pattern of asterisks

*******
*******
*******
*******

Length = 6
Breadth = 5

Rules:
1. find number of rows -> Lenght (Outer loop )
2. write down for rows and conditions: Breadth (Inner loop )


*/

#include <iostream>
using namespace std;

int main()
{
    int l = 4;
    int b = 7;
    for (int row = 0; row < l; row = row + 1)
    {
        for (int col = 0; col < b; col = col + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}