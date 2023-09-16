#include <iostream>
using namespace std;

// First Approach

int MaxNumber(int num1, int num2, int num3)
{
    if (num1 >= num2 && num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num3 && num2 >= num1)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

// Second Approach

int MaxNumberSecond(int num1, int num2, int num3)
{
    int firstMax = max(num1, num2);
    return max(firstMax, num3);
}

int main()
{
    // write the code

    cout << "Max Number: " << MaxNumber(2, 3, 5) << endl;
    cout << "Max Number: " << MaxNumberSecond(2, 3, 5);
    return 0;
}
