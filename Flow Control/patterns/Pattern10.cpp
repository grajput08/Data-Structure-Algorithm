/*

Pattern 10: Print a alphabet inverted  half pyramid pattern

A B C D E
A B C D
A B C
A B
A

num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions: num-row

    condition:
            char ch = col + 'A';
            cout << ch << " ";

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
            char ch = col + 'A';
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}