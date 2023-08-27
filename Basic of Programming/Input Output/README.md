# Input / Output

## Output

**cout** sends formatted output to standard output devices, such as the screen. We use the cout object along with the **<<** operator for displaying output.

```c++
#include <iostream>
using namespace std;

int main() {
    // prints the string enclosed in double quotes
    cout << "This is C++ Programming";
    return 0;
}
```

#### Output of this code

```C++
This is C++ Programming
```

## Input

**cin** takes formatted input from standard input devices such as the keyboard. We use the cin object along with the **>>** operator for taking input.

```c++
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;   // Taking input
    cout << "The number is: " << num;
    return 0;
}

```

#### Output of this code

```C++
Enter an integer: 70
The number is: 70
```
