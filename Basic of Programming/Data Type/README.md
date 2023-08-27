# Data Types

In C++, data types are declarations for variables. This determines the type and size of data associated with variables. For example,

```bash
  int age = 13;
```

Here, age is a variable of type int. Meaning, the variable can only store integers of either 2 or 4 bytes.

## Fundamental Data Types

The table below shows the fundamental data types, their meaning, and their sizes (in bytes):

![App Screenshot](/images/data-types.png)

## Example

```bash
#include<iostream>
using namespace std;

int main() {

	// int -> 4 byte
	int num = 50;
	cout << num << endl;  /* output : 50 */

	cout << sizeof(num) << endl; /* output : 4 */

	//character -> 1byte
	char ch = 'k';
	cout << ch << endl; /* output : k */
	cout << sizeof(ch) << endl; /* output : 1 */

	//float -> 4 byte
	float point = 1.69;
	cout << point << endl; /* output : 1.69 */
	cout << sizeof(point) << endl; /* output : 4 */

	//long -> 4 byte
	long number = 23;
	cout << number << endl; /* output : 23 */
	cout << sizeof(number) << endl; /* output : 8 */

	return 0;
}
```
