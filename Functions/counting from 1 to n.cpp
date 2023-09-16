#include <iostream>
using namespace std;

void Counting(int number)
{
    for (int i = 1; i < number; i++)
    {
        cout << "Number " << i << " is " << i << endl;
    }
}
int main()
{
    // write the code
    Counting(10);
    return 0;
}