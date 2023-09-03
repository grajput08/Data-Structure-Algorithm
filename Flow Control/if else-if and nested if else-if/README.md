# if, if...else and Nested if...else

In programming, we use the if...else statement to run one block of code under certain conditions and another block of code under different conditions.

There are three forms of if...else statements in C++.

- if statement
- if...else statement
- if...else if...else statement

## if Statement

The syntax of the if statement is:

```c++
  if (condition) {
  // body of if statement
}
```

![App Screenshot](/images/if-condition.png)

### Example of If condition:

```c++

#include <iostream>
using namespace std;

int main() {

  int num = 7;

  if(num%2 == 0) {
    cout << "Even" << endl;
  }

  return 0;
}

```

## if...else Statement

The if statement can have an optional else clause. Its syntax is:

```c++
if (condition) {
  // block of code if condition is true
}
else {
  // block of code if condition is false
}
```

![App Screenshot](/images/else-if.png)

### Example of If...else condition:

```c++

#include <iostream>
using namespace std;

int main() {

  int num = 7;

  if(num%2 == 0) {
    cout << "Even" << endl;
  }
  else {
    cout << "Odd" << endl;
  }

  return 0;
}

```

## if...else...else if statement

The if...else statement is used to execute a block of code among two alternatives. However, if we need to make a choice between more than two alternatives, we use the if...else if...else statement.

The syntax of the if...else if...else statement is:

```c++
if (condition1) {
  // code block 1
}
else if (condition2){
  // code block 2
}
else {
  // code block 3
}
```

Here,

- If condition1 evaluates to true, the code block 1 is executed.
- If condition1 evaluates to false, then condition2 is evaluated.
- If condition2 is true, the code block 2 is executed.
- If condition2 is false, the code block 3 is executed.

![App Screenshot](/images/else-if-if.png)

### Example of if...else...else if condition:

```c++
// Program to check whether an integer is positive, negative or zero

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number > 0) {
    cout << "You entered a positive integer: " << number << endl;
  }
  else if (number < 0) {
    cout << "You entered a negative integer: " << number << endl;
  }
  else {
    cout << "You entered 0." << endl;
  }

  cout << "This line is always printed.";

  return 0;
}

```

#### output 1:

```c++
Enter an integer: 1
You entered a positive integer: 1.
This line is always printed.
```

#### output 2:

```c++
Enter an integer: -2
You entered a negative integer: -2.
This line is always printed.
```

#### output 3:

```c++
Enter an integer: 0
You entered 0.
This line is always printed.
```
