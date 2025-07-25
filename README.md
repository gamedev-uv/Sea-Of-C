![](.README/header.png)

# Sea Of C
C programming assignments and lab work completed as part of my undergraduate coursework at Sister Nivedita University. 

---

## Setup
All C programs in this repository were written and tested on Windows using:

- [MinGW](https://www.mingw-w64.org/) as the GCC compiler
- [Visual Studio Code](https://code.visualstudio.com/) as the editor
- [Code Runner extension](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) to easily compile and run .c files with a single shortcut key

## Installing MinGW using [Chocolatey](https://chocolatey.org/)
To install the MinGW compiler, I used [Chocolatey](https://chocolatey.org/), a Windows package manager. If you want to install [choco](https://chocolatey.org/), you can follow this [guide](https://chocolatey.org/install).

And then you can install the compiler by pasting this command in your command prompt  
```
choco install wingw
```
> You will be recommended to do this while running the shell as an Administrator.


## Running  the code
Press `Ctrl + Alt + N` to compile and run the code (using the [Code Runner extension](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)).
The output will appear in the `OUTPUT` tab of the integrated terminal. You can also change the keyboard shortcut in `Settings` or create a custom macro for it.

--- 

## Questions

### 1. Hello World in C
WAP in C to display "Hello World!" in the output console!

``Answer`` [hello-world.c](src/hello-world.c)


`Output Terminal`
```
Hello World!
```

### 2. Arithmetic Operations in C

WAP in C to display to input 2 integers from the user, and perform the basic arithmetic operations on them.
The operations which are to be performed are : 

- Addition `(+)`
- Subtraction `(-)`
- Multiplication `(*)`
- Division `(/)`
- Remainder `(%)`

``Answer`` [arithmetic-operations.c](src/arithmetic-operations.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the value of A : 8
Enter the value of B : 6

=== [OUTPUT] ===
Sum of 8 and 6 is 14
Difference of 8 and 6 is 2
Product of 8 and 6 is 48
Quotient of 8 and 6 is 1.333333
Remainder of 8 and 6 is 2
```

### 3. Swap Variables
WAP in C to take 2 integers as input from the users, then swap their values with and without using a 3rd variable based on the option chosen by the user.

Example : If `A = 4 and B = 5`, after processing they will be `A = 5 and B = 4`

``Answer`` [swap.c](src/swap.c)

`Output Terminal`
```
=== [INPUT] === 
Enter the value of A : 5
Enter the value of B : 4

=== [SWAPPING] ===
Enter 1 to swap with 3rd variable, 0 to do it without another variable : 0
Swapping variables without a 3rd variable

=== [OUTPUT] ===
New Value Of A : 4, New Value Of B : 5
```

```
=== [INPUT] ===
Enter the value of A : 6
Enter the value of B : 9

=== [SWAPPING] ===
Enter 1 to swap with 3rd variable, 0 to do it without another variable : 1
Swapping variables using a 3rd variable

=== [OUTPUT] ===
New Value Of A : 9, New Value Of B : 6
```

```
=== [INPUT] === 
Enter the value of A : 42
Enter the value of B : 24

=== [SWAPPING] ===
Enter 1 to swap with 3rd variable, 0 to do it without another variable : 8
Invalid option was chosen, 8
Exiting program early with code 1
```

### 4. Rectangle 
WAP in C to take the dimensions of a rectangle as input from the user and calculate and print the perimeter and area of the rectangle.
```
Perimeter = 2 * (Length + Breadth);
Area = Length * Breadth;
```

``Answer`` [rectangle.c](src/rectangle.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the length of the rectangle : 5
Enter the breath of the rectangle : 8 
=== [OUTPUT] ===
Perimeter of the rectangle (2 * (L + B)) : 26.000000
Perimeter of the rectangle (L * B) : 40.000000
```

### 5. Circle 
WAP in C to take the radius of a circle as input from the user and calculate and print the perimeter and area of the circle.
```
Perimeter = 2 * PI * Radius;
Area = PI * Radius * Radius;
```

``Answer`` [circle.c](src/circle.c)
> If <math.h>.pow is not available, simply multiply the radius twice

`Output Terminal`
```
=== [INPUT] ===
Enter the radius of the circle : 25.6

=== [OUTPUT] ===
Perimeter of the circle [2*PI*R] : 160.768005
Area of the circle [PI*R*R] : 2057.830566
```

### 6. Variables
WAP in C to input various details about a student and log them in the console once done.
The details which are to be taken as input from the user are : 

- The full name of the student (string (char[]))
- The ID of the student (int)
- Average Marks of the student (float)
- Attendance Percentage of the student (double / long float)
- Grade (char)

``Answer`` [variables.c](src/variables.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the name of the student : Yuvraj Bhowmik
Enter the student's ID : 342007
Enter the average marks of the student : 42.069
Enter the attendance percentage of the student : 75
Enter the grade of the student : F

=== [OUTPUT] ===
=== Details of the student ===
Name          : Yuvraj Bhowmik
Student ID    : 342007
Average Marks : 42.07 / 100.00
Attendance    : 75.000000%
Grade         : F
```

### 7. Operators in C
WAP in C to input integers and perform a variety of operations on them including:
- Binary Arithmetic Operations
- Unary Arithmetic Operations
- Relational Operations
- Logical Operations
- Assignment Operations
- Ternary Operations
- Bitwise Operations

`Answer` [operators.c](src/operators.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the values you want to perform the operations on : 
Enter the value of A : 5
Enter the value of B : 8

=== [Arithmetic Operations] ===
=== [Binary Arithmetic Operation (Operating on 2 operands)] ===
A (5) + B (8) = 13
A (5) - B (8) = -3
A (5) * B (8) = 40
A (5) / B (8) = 0.6250
A (5) % B (8) = 5

=== [Unary Arithmetic Operation (Operating on 1 operand)] ===
A++ : 5
Value changed to => A : 6
++A : 7
Value changed to => A : 7
--B : 7
Value changed to => B : 7
B-- : 7
Value changed to => B : 6

=== [Relational Operations] ===
A (7) == B (6) (Is A equal to B?) :                         0
A (7) != B (6) (Is A not equal to B?) :                     1
A (7) >  B (6) (Is A greater than B?) :                     1
A (7) >= B (6) (Is A greater than or equal to B?) :         1
A (7) <  B (6) (Is A less than B?) :                        0
A (7) <= B (6) (Is A less than or equal to B?) :            0

=== [Logical Operations] ===
A (0) % 2 == 0 || B (-4) % 2 == 1 (A is even or B is odd) :         0
A (1) % 2 == 0 && B (-4) % 2 == 0 (A is even and B is even) :       0
!(A (7) == B (6)) !(A is equal to B) => (A is not equal to B) :     1

=== [Assignment Operations] ===
Result = a * 10; Result :
B -= 2 => B = 4
A += 10 => A = 17
A *= 2 => A = 34
A /= 10 => A = 3
A = 10 => A = 3

=== [Ternary Operations] ===
Enter the age : 17
The user is a minor!

=== [Bitwise Operations] ===
 A (3) | B (4)  : 7
 A (3) & B (4)  : 0
 A (3) ^ B (4)  : 7
~A (3)           : -4
~B (4)           : -5
 A (3) << 2      : 12
 A (3) >> 2      : 0
 B (4) << 1      : 8
 B (4) >> 1      : 2
```

## Notes

### 🧮 Compound (Shorthand) Assignment Operators

Compound assignment operators like `+=`, `-=`, `*=`, `/=`, and `%=` are used to simplify expressions where a variable is operated on and then reassigned to itself.

Instead of writing :
```c
a = a * 2;
```

You can use : 
```c
a *= 2;
```

> [!NOTE]
These aren't just syntax sugar—compilers handle them as dedicated operations and may generate slightly different (sometimes more efficient) code than the expanded form.


⚠️ Be careful with operand order:
```c
a -= b; 
b -= a;
```
The first means `a = a - b`;
The second means `b = b - a`;

### ❓ Ternary (Conditional) Operator
The ternary operator is a compact way to conditionally assign values. It behaves like an if-else expression and is often used in single-line assignments.

Traditional if-else:

```c
int isOver18;

if (age >= 18)
{
    isOver18 = 1;
}
else
{
    isOver18 = 0;
}
```
Same logic using a ternary operator:


```c
int isOver18 = (age >= 18) ? 1 : 0;
```
```c
<variable> = <condition> ? <value_if_true> : <value_if_false>;
```
If the condition is true, value_if_true is assigned. Otherwise, `value_if_false` is assigned.

> [!NOTE]
While it behaves like an if-else, the ternary operator is not rewritten by the compiler into if-else code. The compiler handles it as an expression and may even optimize it more efficiently in some cases. Use it to write "cleaner" and shorter logic when appropriate.