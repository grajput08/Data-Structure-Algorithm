# Loop

In computer programming, loops are used to repeat a block of code.

There are 3 types of loops in C++.

- for loop
- while loop
- do...while loop

## for loop :

The syntax of the for loop is:

```c++
for (initialization; condition; update) {
    // body of-loop
}
```

### Example: Printing Numbers From 1 to 5n

```c++
#include <iostream>

using namespace std;

int main() {
        for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    return 0;
}
```

#### output:

```c++
1 2 3 4 5
```

Here is how this program works

![App Screenshot](/images/for.png)
