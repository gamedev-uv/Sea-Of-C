![](.README/header.png)

# Sea Of C
C programming assignments and lab work completed as part of my undergraduate coursework at Sister Nivedita University. 
Can't figure out how to run the code? Have a look at [Setup](#setup).

---

## Questions

|      | Title                                    | Description 
|   -  | -                                        |:---:
| 1.   | Hello World                              | [View](#1-hello-world-in-c) 
| 2.   | Arithmetic Operations                    | [View](#2-arithmetic-operations-in-c) 
| 3.   | Swap Variables                           | [View](#3-swap-variables) 
| 4.   | Rectangle                                | [View](#4-rectangle) 
| 5.   | Circle                                   | [View](#5-circle) 
| 6.   | Variables                                | [View](#6-variables) 
| 7.   | Operators in C                           | [View](#7-operators-in-c) 
| 8.   | Collinear Points                         | [View](#8-collinear-points) 
| 9.   | Sign Detector                            | [View](#9-sign-detector) 
| 10   | Odd/Even                                 | [View](#10-oddeven) 
| 11.  | Maximum between 2 numbers                | [View](#11-maximum-between-2-numbers) 
| 12.  | Maximum between 3 numbers                | [View](#12-maximum-between-3-numbers) 
| 13.  | Divisibility check for 3 and 5           | [View](#13-3-5-divisibility-test) 
| 14.  | Rectangle Area vs Perimeter Check        | [View](#14-rectangle-area-vs-perimeter-check) 
| 15.  | 3 Digit Number                           | [View](#15-3-digit-number) 
| 16.  | Valid Triangle Sides                     | [View](#16-valid-triangle-sides) 
| 17.  | Valid Triangle Angles                    | [View](#17-valid-triangle-angles) 
| 18.  | Age Category                             | [View](#18-age-category) 
| 19.  | Discount Calculator                      | [View](#19-discount-calculator) 
| 20.  | Salary Calculator                        | [View](#20-salary-calculator) 
| 21.  | Grade Division Calculator                | [View](#21-grade-division-calculator) 
| 22.  | Character Checker                        | [View](#22-character-checker) 
| 23.  | Vowel Consonant Checker                  | [View](#23-vowel-consonant-checker) 
| 24.  | Leap Year Checker                        | [View](#24-leap-year-checker) 
| 25.  | Simple Calculator                        | [View](#25-simple-calculator) 
| 26.  | Simple Grade Calculator                  | [View](#26-simple-grade-calculator) 
| 27.  | Electricity Bill Calculator              | [View](#27-simple-electricity-bill-calculator)
| 28.  | Force Calculation                        | [View](#28-force-calculation)
| 29.  | Distance Calculation                     | [View](#29-distance-calculation)
| 30.  | Final Velocity Calculation               | [View](#30-final-velocity-calculation)
| 31.  | Days Convertor                           | [View](#31-days-convertor)
| 32.  | Seconds Convertor                        | [View](#32-seconds-convertor)
| 33.  | Time Adder                               | [View](#33-time-adder)
| 34.  | Distance Adder                           | [View](#34-distance-adder)
| 35.  | Day Of Week                              | [View](#35-day-of-week)
| 36.  | Month Name                               | [View](#36-month-name)
| 37.  | Vowel Consonant Checker (Switch Case)    | [View](#37-vowel-consonant-checker-switch-case)
| 38.  | Display Numbers                          | [View](#38-display-number)
| 39.  | Shape Area Calculator                    | [View](#39-shape-area-calculator)
| 40.  | Temperature Convertor                    | [View](#40-temperature-convertor)
| 41.  | Odd/Even (Switch Case)                   | [View](#41-odd-even-switch-case) 
| 42.  | Leap Year Checker (Switch Case)          | [View](#42-leap-year-checker-switch-case) 
| 43.  | Currency Convertor                       | [View](#43-currency-convertor) 
| 44.  | Marks Viewer                             | [View](#44-marks-viewer) 
| 45.  | Traffic Light System                     | [View](#45-traffic-light-system) 
| 46.  | Customer Electric Bill Calculator        | [View](#46-customer-electric-bill-calculator) 
| 47.  | Sum of numbers up to n                   | [View](#47-sum-of-numbers-up-to-n) 
| 47.  | Sum of even numbers up to n                   | [View](#48-sum-of-even-numbers-up-to-n) 
| 49.  | Sum of Digits                            | [View](#49-sum-of-digits)
| 50.  | Reverse Digits                           | [View](#50-reverse-digits)
| 51.  | Palindrome Number                        | [View](#51-palindrome-number)
| 52.  | Factorial of a number                    | [View](#52-factorial-of-a-number)
| 53.  | Fibonacci Sequence                       | [View](#53-fibonacci-sequence)
| 54.  | Parking Fee Calculator                   | [View](#54-parking-fee-calculator)

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


### 8. Collinear Points
WAP in C to input 3 sets of coordinates and check whether they are collinear or not.
There are several ways you can do this Mathematically, such as considering it points of a triangle and then calculating the area, comparing slopes etc. We will do it by comparing the slope.

If 3 points are collinear then the slope of the 3rd and 2nd point will be equal to the slope of the 2nd and 1st point.

![Collinear Points](.README/collinear.png)

`Answer` [collinearPoints.c](src/collinearPoints.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the coordinates of the points...
Point A : 1 1
Point B : 2 2
Point C : 3 3

=== [OUTPUT] ===
Points are collinear
```

```
=== [INPUT] ===
Enter the coordinates of the points...
Point A : 3 5
Point B : 7 10
Point C : 67 68

=== [OUTPUT] ===
Points are non collinear
```

### 9. Sign Detector
WAP in C to input an integer and check whether it is zero, a positive number or a negative number.

`Answer` [signDetector.c](src/signDetector.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number : 25

=== [OUTPUT] ===
Number is a +ve number
```

```
=== [INPUT] ===
Enter the number : -6

=== [OUTPUT] ===
Number is a -ve number
```

```
=== [INPUT] ===
Enter the number : 0

=== [OUTPUT] ===
Number is zero
```

### 10. Odd/Even
WAP in C to input an integer and check whether it is an odd or even number.

`Answer` [oddEven.c](src/oddEven.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number : 3

=== [OUTPUT] ===
Number is an odd number
```

```
=== [INPUT] ===
Enter the number : 4

=== [OUTPUT] ===
Number is an even number
```

### 11. Maximum between 2 numbers
WAP in C to find the maximum between 2 given integers and print the number which is bigger. For example if `A = 2` and `B = 5`, you need to print B which is the bigger number. The value of the number need not be printed. (Edge case : Both the numbers might be equal)

`Answer` [max2Numbers.c](src/max2Numbers.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the numbers...
Enter the value of A : 25 
Enter the value of B : 6

=== [OUTPUT] ===
A is greater than B
```

```
=== [INPUT] ===
Enter the numbers...
Enter the value of A : 4
Enter the value of B : 4

=== [OUTPUT] ===
B is equal to A
```

### 12. Maximum between 3 numbers
WAP in C to find the maximum between 3 given integers and print the number which is bigger. For example if `A = 2`, `B = 5`, `C = 6` you need to print C which is the biggest number amongst the three. The value of the number need not be printed. (Edge case : All the numbers might be the same)

`Answer` [max3Numbers.c](src/max3Numbers.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the numbers...
Enter the value of A : 2
Enter the value of B : 5
Enter the value of C : 6

=== [OUTPUT] ===
C is the greatest number
```

```
=== [INPUT] ===
Enter the numbers...
Enter the value of A : 3
Enter the value of B : 3
Enter the value of C : 3

=== [OUTPUT] ===
All the numbers are equal
```

### 13. 3, 5 Divisibility Test
WAP in C to enter an integer and check whether it is divisible by 3 or 5. (Edge case : It might be divisible by both or none, for which you might or might not need to add a separate output if asked, which will make it the commonly asked [Fizz Buzz Problem](https://www.geeksforgeeks.org/dsa/fizz-buzz-implementation/))

`Answer` [div3-5.c](src/div3-5.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number : 15

=== [OUTPUT] ===
The number is divisible by 3
The number is divisible by 5
```

```
=== [INPUT] ===
Enter the number : 7

=== [OUTPUT] ===
Divisible by neither 3 nor 5
```

### 14. Rectangle Area vs Perimeter Check
WAP in C to input the dimensions of a rectangle (width and breadth) and check if the area of the rectangle is greater than its perimeter. [Formulas](#4-rectangle) have already been discussed.

`Answer` [rectangle-area-vs-perimeter.c](src/rectangle-area-vs-perimeter.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the dimensions of the rectangle...
Enter the width : 3
Enter the breadth : 4

=== [OUTPUT] ===
Perimeter : 14.00
Area : 12.00
Perimeter is greater than the area
```

```
=== [INPUT] ===
Enter the dimensions of the rectangle...
Enter the width : 5
Enter the breadth : 6

=== [OUTPUT] ===
Perimeter : 22.00
Area : 30.00
Area is greater than the perimeter
```

### 15. 3 Digit Number
WAP in C to input an integer and check whether it is a 3 digit number or not

`Answer` [digit3Number](src/digit3Number.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number : 256

=== [OUTPUT] ===
Number is a 3 digit number
```

```
=== [INPUT] ===
Enter the number : 34

=== [OUTPUT] ===
Number is not a 3 digit number
```

### 16. Valid Triangle Sides
WAP in C to input 3 numbers and check whether they can be used to form a valid triangle. The [Triangle Inequality Theorem](https://en.wikipedia.org/wiki/Triangle_inequality) states that 
> The sum of the lengths of any two sides must be greater than or equal to the length of the remaining side.

![](.README/triangleInequalityTheorem.png)

`Answer` [validTriangleSides.c](src/validTriangleSides.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the sides...
Enter the first side : 1
Enter the second side : 1
Enter the third side : 2

=== [OUTPUT] ===
A valid triangle can be formed
```

```
=== [INPUT] ===
Enter the sides...
Enter the first side : 25
Enter the second side : 3
Enter the third side : 2

=== [OUTPUT] ===
A valid triangle can't be formed
```

### 17. Valid Triangle Angles
WAP in C to input 3 numbers and check if those can the angles used to form a triangle. The sum of the angles should be equal to 180.

`Answer` [validTriangleAngles.c](src/validTriangleAngles.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the angles...
Angle A : 50
Angle B : 60
Angle C : 70

=== [OUTPUT] ===
A valid triangle can be formed using the angles
```
```
=== [INPUT] ===
Enter the angles...
Angle A : 5
Angle B : 6
Angle C : 7

=== [OUTPUT] ===
A valid triangle can't be formed using the angles
```

### 18. Age Category
WAP in C to input the age of the user and give them their respective category as output.

| Age     | Category 
|   -     |     -
| < 18    | Children 
| 18 - 60 | Young 
| > 60    | Old 


`Answer` [ageCategory.c](src/ageCategory.c)

`Output Terminal`
```
=== [OUTPUT] ===
Enter the age : 17

=== [OUTPUT] ===
Category : Children
```
```
=== [OUTPUT] ===
Enter the age : 25

=== [OUTPUT] ===
Category : Young
```
```
=== [OUTPUT] ===
Enter the age : 64

=== [OUTPUT] ===
Category : Old
```

### 19. Discount Calculator
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If quantity and price per item are input through the keyboard. WAP in C to calculate the total expenses.

`Answer` [discountCalculator.c](src/discountCal.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the quantity : 1200
Enter the rate : 10

=== [OUTPUT] ===
Total Amount is : 10800.0000
```

```
=== [INPUT] ===
Enter the quantity : 512
Enter the rate : 3 

=== [OUTPUT] ===
Total Amount is : 1536.0000
```

### 20. Salary Calculator
In a company an employee is paid as under: If their basic salary is less than `Rs. 1500`, then `HRA = 10%` of basic salary and `DA = 90%` of basic salary. If their salary is either equal to or above `Rs. 1500`, then `HRA = Rs. 500` and `DA = 98%` of basic salary. WAP in C to input the basic salary of the employee and calculate their gross salary.

`Answer` [salaryCalculator.c](src/salaryCalculator.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the base salary : 1200

=== [OUTPUT] ===
Gross Salary : 2400.000
```
```
=== [INPUT] ===
Enter the base salary : 1500

=== [OUTPUT] ===
Gross Salary : 3470.000
```

### 21. Grade Division Calculator
WAP in C to input the marks attained by a student in 5 different subjects and calculate the percentage of marks gained in total. Based on that percentage calculate and display the division attained by the student.

| Percentage   | Division      |
| -            | -             |
| >= 60        | 1st Division  |
| 50 - 59      | 2nd Division  |
| 40 - 49      | 3rd Division  |
| <= 40        | Fail          |

`Answer` [gradeDivisionCalculator](src/gradeDivisionCalculator.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the marks obtained in the subjects...
Marks in A : 80
Marks in B : 98
Marks in C : 78
Marks in D : 45
Marks in E : 100

=== [OUTPUT] ===
Percentage obtained : 80.20%
1st Division
```

### 22. Character Checker
WAP in C to input an character and check whether it is the following or not without using any pre-built character check methods.
It might be an upper case alphabet (`A - Z`), lower case (`a - z`) or digit (`0 - 9`) or a special character (`#, @, %, $`, etc)

`Answer` [characterChecker.c](src/characterChecker.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the character : A

=== [OUTPUT] ===
Upper Case Character (A - Z)
```
```
=== [INPUT] ===
Enter the character : #

=== [OUTPUT] ===
Special Character : #
```

### 23. Vowel Consonant Checker
WAP in C to input an alphabet and check whether it is a vowel or consonant without using any string functions.

`Answer` [vowelConsonant.c](src/vowelConsonant.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the alphabet : 6

=== [OUTPUT] ===
Entered character is not an alphabet
```

```
=== [INPUT] ===
Enter the alphabet : a

=== [OUTPUT] ===
Entered alphabet is a vowel
```

```
=== [INPUT] ===
Enter the alphabet : x

=== [OUTPUT] ===
Entered alphabet is a consonant
```

### 24. Leap Year Checker
WAP in C to input a year and check whether it is a leap year or not. Leap year repeat every `4` years (so we can check if it is divisible by `4`) but there is a small exception where leap year is not celebrated on century years such as `1800`, `1500` unless they are also divisible by `400`. 

> Wanna know why that exception exists? Read more about it [here](https://en.wikipedia.org/wiki/Leap_year#Gregorian%20calendar:~:text=in%20leap%20years.-,Gregorian%20calendar,-%5Bedit%5D)

`Answer` [leapYear.c](src/leapYear.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the year : 1600

=== [OUTPUT] ===
Year 1600 is a leap year
```
```
=== [INPUT] ===
Enter the year : 1800

=== [OUTPUT] ===
Year 1800 is not a leap year
```

### 25. Simple Calculator
WAP in C to input 2 operands and a single operand and print out the result.
The program should support the follow operations : `+`, `-`, `*`, `/`, `%`.

`Answer` [simpleCalculator.c](src/simpleCalculator.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the operation...
4 * 5

=== [OUTPUT] ===
4.00 * 5.00 = 20.00
```

```
=== [INPUT] ===
Enter the operation...
25 / 6

=== [OUTPUT] ===
25.00 / 6.00 = 4.17
```

### 26. Simple Grade Calculator 
WAP in C to create a simple grade calculator based on the average of the marks in 5 subjects which are to be input by the user.

| Marks        | Grade |
| -            | -     |
| >= 90        | O     |
| 80 - 89      | E     |
| 70 - 79      | A     |
| 60 - 69      | B     |
| 50 - 59      | C     |
| 40 - 49      | D     |
| < 40         | F     |

`Answer` [simpleGradeCalculator.c](src/simpleGradeCalculator.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the marks : 65

=== [OUTPUT] ===
Grade Attained : B
```

### 27. Simple Electricity Bill Calculator
WAP in C to enter the number of units used and calculate the total price based on the slabs.
For the first `102` units the price per unit is `4.89` for the next `58` units the price is `5.40` and for units any higher each unit will be priced at `6.50`

`Answer` [electricityBill.c](src/electricityBill.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number of units : 180

=== [OUTPUT] ===
The total cost for is : 941.980
```

### 28. Force Calculation
WAP in C to calculate the force after taking `mass (kg)` and `acceleration (m/s^2)` as input from the user. Use the formula : `Force  = Mass * Acceleration`.

`Answer` [forceCal.c](src/forceCal.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the mass of the body : 500
Enter the acceleration of the body : 10

=== [OUTPUT] ===
Mass : 500.00 kg(s)
Acceleration : 10.00 m/s^2
Force : 5000.00 N
```

### 29. Distance Calculation
WAP in C to enter the `distance traveled (d)` after taking the `initial velocity (u) m/s`, `acceleration (f) m/s^2` and `time (t) s` as input from the user. Use the second equation of motion : `d = ut + 1/2ft^2`.

`Answer` [distanceCal.c](src/distanceCal.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the initial velocity (u) : 25
Enter the acceleration (f) : 6
Enter the time (t) : 16

=== [OUTPUT] ===
Distance Traveled : 1168.00 m
```

### 30. Final Velocity Calculation
WAP in C to calculate the `final velocity (v)` after taking the `initial velocity (u) m/s`, `acceleration (a) m/s^2` and `displacement (d)` as input from the user. Use the third equation of motion : `v^2 = u^2 + 2ad`, `v = sqrt(u^2 + 2ad)`

`Answer` [finalVelCal.c](src/finalVelCal.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the initial velocity (u) :
5 
Enter the acceleration (f) : 2
Enter the distance traveled (t) : 8

=== [OUTPUT] ===
Final Velocity : 7.55 m/s
```

### 31. Days Convertor 
WAP in C to convert days into years, months, weeks, and days.
Hint : `Years = Days / 365`, `Months = Remaining Days / 30`, `Weeks = Remaining Days / 7`,`Days = Remaining Days`. Putting in the values for the remaining days we get : 
```
Years = Days / 365
Months = (Days % 365) / 30
Weeks = ((Days % 365) % 30) / 7
Days = ((Days % 365) % 30) % 7
```
`Answer` [daysConvertor.c](src/daysConvertor.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number of days : 768

=== [OUTPUT] ===
768 days = 2 year(s) 1 month(s) 1 week(s) 1 day(s)
```

### 32. Seconds Convertor 
WAP in C to convert seconds into hours, minutes, and seconds.
Hint : `Hours = Seconds / 3600`, `Months = Remaining Seconds / 60`, `Seconds = Remaining Seconds`. Putting in the values for the remaining seconds we get : 
```
Years = Seconds / 3600
Months = (Seconds % 3600) / 60
Days = (Seconds % 3600) % 60
```
`Answer` [secondsConvertor.c](src/secondsConvertor.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number of seconds : 6400

=== [OUTPUT] ===
6400 seconds = 1 hours(s) 46 minutes(s) and 40 seconds(s)
```

### 33. Time Adder 
Write a program in C to add two times taken in hours, minutes, and second format `T1 = {hour1, minute1, second1}`, `T2 = {hour2, minute2, second2}` and add them up and display the output in this format : `T3 = {hour3, minute3, second3}`. 

The Maths behind the solution is quite simple, we simply need to add the corresponding values from `T1` and `T2` and if they are more than what they could be then they are to be converted (`Seconds if more than 60 get converted into Minutes and similarly minutes when larger than 60 get converted into hours`)
```
Seconds = (T1_Seconds + T2_Seconds) % 60
Minutes = (T1_Minutes + T2_Minutes) % 60 + (T1_Seconds + T2_Seconds) / 60
Hours = (T1_Hours + T2_Hours) + (T1_Minutes + T2_Minutes) / 60 + (T1_Seconds + T2_Seconds) / 60
```


`Answer` [timeAdder.c](src/timeAdder.c)

`Output Terminal`
```
=== [INPUT] ===
Enter T1 : 
Hour : 5
Minute : 40
Second : 5

Enter T2 : 
Hour : 2
Minute : 56
Second : 4

=== [OUTPUT] ===
T3 = 8 hour(s) 36 minute(s) 9 second(s)
```

### 34. Distance Adder 
Write a program in C to add two distances taken in feet and inches, format `D1 = {feet1, inch1}`, `D2 = {feet2, inch2}` and add them up and display the output in this format : `D3 = {feet3, inch3}`. 

The Maths behind the solution is once again quite simple, (It is similar to the previous) we simply need to add the corresponding values from `D1` and `D2` and if they are more than what they could be then they are to be converted (`Inches if more than 12 get converted into feet`)

```
Inches = (D1_Inches + D2_Inches) % 12
Feet = (D1_Feet + D2_Feet) + ((D1_Inches + D2_Inches) / 12)
```

`Answer` [distanceAdder.c](src/distanceAdder.c)

`Output Terminal`
```
=== [INPUT] ===
Enter D1 :
Feet : 5
Inch : 11

Enter D2 :
Feet : 5
Inch : 4

=== [OUTPUT] ===
D3 = 11 feet 3 inch(es)
```

### 35. Day Of Week
WAP in C to find the day of the week using switch-case.

`Answer` [dayOfWeek.c](src/dayOfWeek.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the day : 3

=== [OUTPUT] ===
The corresponding day is : Tuesday
```

```
=== [INPUT] ===
Enter the day : 8

=== [OUTPUT] ===
The corresponding day is : INVALID, No day was found at 8
```

### 36. Month Name
WAP in C to find the month name using switch-case.

`Answer` [monthName.c](src/monthName.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the month : 1

=== [OUTPUT] ===
The corresponding month is : January
```

```
=== [INPUT] ===
Enter the month : 13

=== [OUTPUT] ===
The corresponding month is : INVALID, No month was found at 13
```

### 37. Vowel Consonant Checker (Switch Case)
WAP in C to check whether a character is a vowel or consonant using switch-case.

`Answer` [vowelConsonantSwitchCase.c](src/vowelConsonantSwitchCase.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the character : y

=== [OUTPUT] ===
y is a consonant
```

```
=== [INPUT] ===
Enter the character : O

=== [OUTPUT] ===
O is a vowel
```

```
=== [INPUT] ===
Enter the character : 6

=== [OUTPUT] ===
6 is not an alphabet, Can't be a vowel or consonant
```

### 38. Display Number
WAP in C to display numbers (0–9) in words using switch-case.

`Answer` [displayNumber.c](src/displayNumber.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number : 7

=== [OUTPUT] ===
Number Name : Seven
```

```
=== [INPUT] ===
Enter the number : 89

=== [OUTPUT] ===
Number Name : [INVALID OPTION], Can't name 89
```

### 39. Shape Area Calculator
WAP in C to calculate the area of any given shape (add at least 3 shapes the user can choose from).

> [!NOTE] 
I have added Square (a^2), Circle (PI * r^2) and Triangle (1/2 * b * h).

`Answer` [shapeAreaCalculator.c](src/shapeAreaCalculator.c)

`Output Terminal`
```
=== [INPUT] ===
Choose the shape for which you want to calculator the area :
- 0 <=> Square
- 1 <=> Circle
- 2 <=> Triangle
Select Shape : 2

=== [OUTPUT] ===
Triangle has been selected
Enter the base of the triangle : 2
Enter the height of the triangle : 2
```

```
=== [INPUT] ===
Choose the shape for which you want to calculator the area :
- 0 <=> Square
- 1 <=> Circle
- 2 <=> Triangle
Select Shape : 7

=== [OUTPUT] ===
The shape for option 7 is not supported
```

### 40. Temperature Convertor
WAP in C to convert temperature (Celsius ↔ Fahrenheit) using switch case.
You can use the following relations for the conversion
```
F = (C * 9/5) + 32
C = (F - 32) * 5/9

where C = Temperature in Celsius Scale
      F = Temperature in Fahrenheit Scale
```

`Answer` [temperatureConvertor.c](src/temperatureConvertor.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the temperature : 32
Enter 0 to convert to Fahrenheit and 1 to convert to Celsius : 0

=== [OUTPUT] ===
Temperature in Fahrenheit : 89.60
```

```
=== [INPUT] ===
Enter the temperature : 98
Enter 0 to convert to Fahrenheit and 1 to convert to Celsius : 1

=== [OUTPUT] ===
Temperature in Celsius : 36.67
```

### 41. Odd Even Switch Case
WAP in C to check whether a number is even, odd, or zero using switch case.

`Answer` [oddEvenSwitchCase.c](src/oddEvenSwitchCase.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number : 0

=== [OUTPUT] ===
The number is zero
```

```
=== [INPUT] ===
Enter the number : 6

=== [OUTPUT] ===
The number is non-zero
The number is even
```

```
=== [INPUT] ===
Enter the number : 5

=== [OUTPUT] ===
The number is non-zero
The number is odd
```

### 42. Leap Year Checker Switch Case
WAP in C to check whether a year is a leap year using switch-case. You can read about the rules of leap years [here](#24-leap-year-checker) (normal leap year question).

`Answer` [leapYearSwitchCase.c](src/leapYearSwitchCase.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the year : 1800

=== [OUTPUT] ===
Year 1800 is a century year
Year 1800 is a not leap year
```

```
=== [INPUT] ===
Enter the year : 1600

=== [OUTPUT] ===
Year 1600 is a century year
Year 1600 is a leap year
```

```
=== [INPUT] ===
Enter the year : 2024

=== [OUTPUT] ===
Year 2024 is not a century year
Year 2024 is a leap year
```

### 43. Currency Convertor
WAP in C to convert currency (USD ↔ INR, EUR ↔ INR) using switch case.

`Answer` [currencyConvertor.c](src/currencyConvertor.c)

`Output Terminal`
```
=== [INPUT] ===
--- Select the initial currency ---
0 -> USD
1 -> EUR
2 -> INR
Choice : 2
Enter the amount : 50

=== [OUTPUT] ===
--- Enter the target currency ---
0 -> USD
1 -> EUR
Choice : 1

50.00 INR = 0.57 EUR
```

```
=== [INPUT] ===
--- Select the initial currency ---
0 -> USD
1 -> EUR
2 -> INR
Choice : 0
Enter the amount : 50

=== [OUTPUT] ===
50.00 USD = 4370.00 INR
```

### 44. Marks Viewer  
WAP in C to display student result (Total, Average, Pass/Fail) using switch case. After inputting marks in 3 subjects.

`Answer` [marksViewer.c](src/marksViewer.c)

`Output Terminal`
```
=== [INPUT] ===
--- Enter the marks ---
Marks in A : 50
Marks in B : 70
Marks in C : 40

--- Select option ---
- 0 -> Total Marks
- 1 -> Average Marks
- 2 -> Pass/Fail Status
Option : 2

=== [OUTPUT] ===
Status : Pass
```

```
=== [INPUT] ===
--- Enter the marks ---
Marks in A : 50
Marks in B : 90
Marks in C : 40

--- Select option ---
- 0 -> Total Marks
- 1 -> Average Marks
- 2 -> Pass/Fail Status
Option : 1

=== [OUTPUT] ===
Average Marks : 60.00
```

### 45. Traffic Light System
WAP in C to simulate a traffic light system using switch case.

`Answer` [trafficLightSystem.c](src/trafficLightSystem.c)

`Output Terminal`
```
=== [INPUT] ===
--- Select the light ---
- 0 => Red
- 1 => Yellow
- 2 => Green
Choice : 1

=== [OUTPUT] ===
Traffic Light was switched to Yellow -- Please SLOW DOWN
```

### 46. Customer Electric Bill Calculator
WAP in C to calculate electricity bill for different customer categories using switch case. Input the number of units and the category and display the bill amount.

| Category           | Price Per Unit |
|-                   |:---:           |
| Residential        | ₹10            |
| Commercial         | ₹8             |
| Industry           | ₹20            |

`Answer` [customerElectricBillCalculator.c](src/customerElectricBillCal.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number of units : 50

--- Select the category ---
- 0 -> Residential
- 1 -> Commercial
- 2 -> Industrial
Choice : 2

=== [OUTPUT] ===
Bill Amount : 1000
```

```
=== [INPUT] ===
Enter the number of units : 50

--- Select the category ---
- 0 -> Residential
- 1 -> Commercial
- 2 -> Industrial
Choice : 8

=== [OUTPUT] ===
Selected category '8' wasn't found
Residential Rates will be used
Bill Amount : 500
```

### 47. Sum of numbers up to n
WAP in C to input a number `n` and use any type of loop to find the sum of all +ve integers up to `n` and print it out as the output.

`Answer` [sumUptoN.c](src/sumUptoN.c)

`Output Terminal`
```
=== [INPUT] ===
Enter n : 5

=== [OUTPUT] ===
Sum of integers up to 5 : 10
```

### 48. Sum of even numbers up to n
WAP in C to input a number `n` and use any type of loop to find the sum of all +ve even integers up to `n` and print it out as the output.

`Answer` [evenSumUptoN.c](src/evenSumUptoN.c)

`Output Terminal`
```
=== [INPUT] ===
Enter n : 5

=== [OUTPUT] ===
Sum of even integers up to 5 : 6
```

### 49. Sum of Digits
WAP in C to input a number `n` and use any type of loop to find the sum of all its digits print it out as the output.

`Answer` [sumOfDigits.c](src/sumOfDigits.c)

`Output Terminal`
```
=== [INPUT] ===
Enter n : 256

=== [OUTPUT] ===
Sum of digits of 256 : 13
```

### 50. Reverse Digits
WAP in C to input a number `n` and use any type of loop to find reverse the number by reversing the order of its digits and print the reversed number as output.

`Answer` [reverseDigits.c](src/reverseDigits.c)

`Output Terminal`
```
=== [INPUT] ===
Enter n : 256

=== [OUTPUT] ===
Reverse of 256 <=> 652
```

### 51. Palindrome Number
WAP in C to input a number `n` and check whether it is palindrome number or not. A palindrome number is one which reads the same from the front and back. So its reverse and itself are the same number. Example : `121 = 121`, where as `52 != 25`

`Answer` [palindromeNumber.c](src/palindromeNumber.c)

`Output Terminal`
```
=== [INPUT] ===
Enter n : 55

=== [OUTPUT] ===
Reverse of 55 <=> 55, thus 55 is a palindrome
```

```
=== [INPUT] ===
Enter n : 256

=== [OUTPUT] ===
Reverse of 256 <=> 652, thus 256 is not a palindrome
```

### 52. Factorial of a number
WAP in C to input a number `n` and find and print its factorial (`n!`). 
```
Where, 
n! = n * (n-1)!, and 1! = 1

Example : 
(3)! = 3! * 2!
     = 3! * 2 * 1!
     = 3! * 2 * 1
```

`Answer` [factorial.c](src/factorial.c)

`Output Terminal`
```
=== [INPUT] ===
Enter n : 5

=== [OUTPUT] ===
5! = 120
```

```
=== [INPUT] ===
Enter n : -8
-ve numbers are not supported!
```

### 53. Fibonacci Sequence
WAP in C to input a number `n` and print the first n elements of the Fibonacci Sequence.
The Fibonacci Sequence starts with `0` and `1` and then every consecutive element is found by adding the previous 2 elements.

```
So 
0, 1, 0 + 1 => 0, 1, 2
0, 1, 2, 1 + 2 => 0, 1, 2, 3
...
...
0, 1, 2, 3, 5, 8, 13...
```

`Answer` [fibonacci.c](src/fibonacci.c)

`Output Terminal`
```
=== [INPUT] ===
Enter n : 25

=== [OUTPUT] ===
Sequence : 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368
```

```
=== [INPUT] ===
Enter n : -5
Invalid number of elements!
```
### 54. Parking Fee Calculator
WAP in C to input parking hours and calculate the total fee based on hourly rates.
Use if for special rates like “first hour free”, “flat rate after 10 hours", "flat rates after 24 hours".

`Answer` [parkingFeeCalculator.c](src/parkingFeeCalculator.c)

`Output Terminal`
```
=== [INPUT] ===
Enter the number of hours parked : 45

=== [OUTPUT] ===
Price for 45 hour(s) of parking : 2000.00
```

```
=== [INPUT] ===
Enter the number of hours parked : 1

=== [OUTPUT] ===
Price for 1 hour(s) of parking : 0.00
```

## Setup
All C programs in this repository were written and tested on Windows using:

- [MinGW](https://www.mingw-w64.org/) as the GCC compiler
- [Visual Studio Code](https://code.visualstudio.com/) as the editor
- [Code Runner extension](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) to easily compile and run .c files with a single shortcut key

## Installing MinGW using [Chocolatey](https://chocolatey.org/)
To install the MinGW compiler, I used [Chocolatey](https://chocolatey.org/), a Windows package manager. If you want to install [choco](https://chocolatey.org/), you can follow this [guide](https://chocolatey.org/install).

And then you can install the compiler by pasting this command in your command prompt  
```
choco install mingw
```
> You will be recommended to do this while running the shell as an Administrator.


## Running  the code
Press `Ctrl + Alt + N` to compile and run the code (using the [Code Runner extension](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)).
The output will appear in the `OUTPUT` tab of the integrated terminal. You can also change the keyboard shortcut in `Settings` or create a custom macro for it.

--- 