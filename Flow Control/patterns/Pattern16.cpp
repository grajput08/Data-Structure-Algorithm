/*

Pattern 16: Print Floyd's triangle

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

num = 5

*/
#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    int count = 0;

    for (int row = 0; row < num; row = row + 1)
    {

        for (int col = 0; col < row + 1; col = col + 1)
        {
            count = count + 1;
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}