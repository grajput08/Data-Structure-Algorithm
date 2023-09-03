/*

Pattern 7: Print a numeric inverted  half pyramid pattern

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions: num-row

    condition:
        cout<< col + 1 << " ";

*/

#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    for (int row = 0; row < num; row = row + 1)
    {
        for (int col = 0; col < num - row; col = col + 1)
        {

            cout << col + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}