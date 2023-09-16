/*

Pattern 1: Print a Square pattern of asterisks

*****
*****
*****
*****
*****

num= 5

Rules:
1. find number of rows -> num (Outer loop )
2. write down for rows and conditions: num (Inner loop )


*/

#include <iostream>
using namespace std;

int main() {
  int num = 5;
  for (int row = 0; row < num; row = row + 1) {
    for (int col = 0; col < num; col = col + 1) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}