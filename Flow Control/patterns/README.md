# Patterns

30+ Most Asked Pattern Programs in C++

### [Pattern 1: Print a Square pattern](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern1.cpp)

```c++
*****
*****
*****
*****
*****

num= 5

Rules:
1. find number of rows -> num (Outer loop )
2. write down for rows and conditions: num (Inner loop )

```

### [Pattern 2: Print a Rectangle pattern](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern2.cpp)

```c++
*******
*******
*******
*******

Length = 6
Breadth = 5

Rules:
1. find number of rows -> Lenght (Outer loop )
2. write down for rows and conditions: Breadth (Inner loop )


```

### [Pattern 3: Print a hollow square pattern](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern3.cpp)

```c++
*****
*   *
*   *
*   *
*****

num = 5

Rules:
1. find number of rows -> num (Outer loop )
2. write down for rows and conditions: num (Inner loop )

        conditions:

        if (row == 0 || row == num - 1)
            {
                cout << "*";
            }
            else
            {
                if (col == 0 || col == num - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
```

### [Pattern 4: Print a hollow Reactangle pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern4.cpp)

```c++
*****
*   *
*   *
*   *
*   *
*****

Length = 6
Breadth = 5

Rules:
1. find number of rows -> Lenght (Outer loop )
2. write down for rows and conditions: Breadth (Inner loop )

        conditions:

        if (row == 0 || row == l - 1)
            {
                cout << "*";
            }
            else
            {
                if (col == 0 || col == b - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

```

### [Pattern 5: Print a half pyramid pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern5.cpp)

```c++
*
**
***
****
*****

num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions: row+1

```

### [Pattern 6: Print a inverted half pyramid pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern6.cpp)

```c++
*****
****
***
**
*

num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions: num-row

```

### [Pattern 7: Print a numeric half pyramid pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern7.cpp)

```c++
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions: row+1

    condition:
        cout<< col + 1 << " ";

```

### [Pattern 8: Print a numeric inverted half pyramid pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern8.cpp)

```c++
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions: num-row

    condition:
        cout<< col + 1 << " ";

```

### [Pattern 9: Print a alphabet inverted half pyramid pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern9.cpp)

```c++
A
A B
A B C
A B C D
A B C D E

num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions: row + 1

    condition:
        char ch = col + 'A';
        cout << ch << " ";

```

### [Pattern 10: Print a alphabet inverted half pyramid pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern10.cpp)

```c++
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

```

### [Pattern 11: Print a full pyramid pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern11.cpp)

```c++

For Asterisks:

    *
   ***
  *****
 *******
*********

For Numeric:

    1
   123
  12345
 1234567
123456789


For Alphabet:

    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI



num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions:

    r0 -> 4 space, 1*
    r1 -> 3 space, 3*
    r3 -> 2 space, 5*
    r4 -> 1 space, 7*
    r5 -> 0 space, 9*

    condition:

    space: num - row -1
    star: 2* row + 1


```

### [Pattern 12: Print a inverted pyramid pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern12.cpp)

```c++
For Asterisks:

*********
 *******
  *****
   ***
    *

For Numeric:

123456789
 1234567
  12345
  123
   1


For Alphabet:

ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A



num = 5

Rules:
1. find number of rows -> num
2. write down for rows and conditions:

    r0 -> 0 space, 9*
    r1 -> 1 space, 7*
    r2 -> 2 space, 5*
    r3 -> 3 space, 3*
    r4 -> 4 space, 1*

    condition:

    space: row
    star: 2* num - 2 * row -1

```

### [Pattern 13: Print a diamond pattern pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern13.cpp)

```c++
For Asterisks:

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

For Numeric:

    1
   123
  12345
 1234567
123456789
123456789
 1234567
  12345
   123
    1


For Alphabet:

    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A



num = 10

Rules:
1. find number of rows -> num
2. write down for rows and conditions:

    condition:

    Outer Loop: num/2

    Inner loop:

        for first Half:

            space: num / 2 - row - 1
            star: 2 * row + 1

        for Second Half:

            space: row
            star:  num - 2 * row - 1

```

### [Pattern 14: Print a hollow diamond pattern ](https://github.com/grajput08/Data-Structure-Algorithm/blob/main/Flow%20Control/patterns/Pattern14.cpp)

```c++
For Asterisks:

    *
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *

For Numeric:

    1
   1 3
  1   5
 1     7
1       9
1       9
 1     7
  1   5
   1 3
    1


For Alphabet:

    A
   A C
  A   E
 A     G
A       I
A       I
 A     G
  A   E
   A C
    A



num = 10

Rules:
1. find number of rows -> num
2. write down for rows and conditions:

    condition:

    Outer Loop: num/2

    Inner Loop:

        for first Half:

            space: num / 2 - row - 1;
            star:
                num/2 - 2 * row -1
                if(col == 0 || col == 2 * row){
                    cout<<"*"
                }else{
                    cout<<" "
                }

        for Second Half:

            space: num / 2;
            star:
                num - 2 * row -1
                if(col == 0 || col == num - 2 * row - 2){
                        cout<<"*"
                    }else{
                        cout<<" "
                    }

```
