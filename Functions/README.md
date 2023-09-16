# Functions

A function is a block of code that performs a specific task.

There are two types of function in C++ programming:

- Standard library functions
- User-defined functions

## Standard library functions

The standard library functions are built-in functions in C++ programming.

Visit [standard library functions](https://www.programiz.com/c-programming/library-function) in C++ programming to learn more.

## User-defined functions

A function is a block of code that performs a specific task.

```C++
//return true -> if N is a prime no.
//return false -> if N is not a prime no.

bool checkPrime(int n) {

	for(int i=2; i<n; i++) {
		if(n%i == 0) {
			//remainder = 0 -> perfectly divisible
			//not a prime numbner
			return false;
		}
	}
	return true;

}



int main() {

	bool prime = checkPrime(1);

	if(prime) {
		cout << "its a prime number" << endl;
	}
	else {
		cout << "its not a prime number" << endl;
    }
    return 0;
}
```

## Programming Question

[1. Find the max of three numbers.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[2. Counting from 1 to N.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[3. Check prime number or not](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[4. Check even or odd.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[5. Sum of all Number upto 1 to N.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[6. Sum of all even Number upto 1 to N.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[7. Find the area of Circle.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[8. Find Factorial of Number.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[9. Print all prime number from 1 to N](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[10. Print all digit of an Integer.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[11. Create Number using digit.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[12. Km to miles.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[13. Count all set of bits.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[14. Convert the temperature.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)

[15. Set kth Bits.](https://github.com/grajput08/Data-Structure-Algorithm/tree/main/Flow%20Control/patterns)
