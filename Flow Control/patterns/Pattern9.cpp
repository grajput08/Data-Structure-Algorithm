/*

Pattern 7: Print a alphabet inverted  half pyramid pattern

A
A B
A B C
A B C D
A B C D E

num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions: row + 1

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
        for (int col = 0; col < row + 1; col = col + 1)
        {
            char ch = col + 'A';
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}