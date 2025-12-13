#include <stdio.h>

int main()
{
    int a, b, age;

    printf("=== [INPUT] ===");
    printf("\nEnter the values you want to perform the operations on : ");

    printf("\nEnter the value of A : ");
    scanf("%d", &a);
    
    printf("Enter the value of B : ");
    scanf("%d", &b);

    //Arithmetic operations
    printf("\n=== [Arithmetic Operations] ===");
    printf("\n=== [Binary Arithmetic Operation (Operating on 2 operands)] ===");
    printf("\nA (%d) + B (%d) = %d", a, b, a + b);
    printf("\nA (%d) - B (%d) = %d", a, b, a - b);
    printf("\nA (%d) * B (%d) = %d", a, b, a * b);
    printf("\nA (%d) / B (%d) = %.4f", a, b, (float)a / b);
    printf("\nA (%d) %% B (%d) = %d", a, b, a % b);

    printf("\n\n=== [Unary Arithmetic Operation (Operating on 1 operand)] ===");
    printf("\nA++ : %d", a++);
    printf("\nValue changed to => A : %d", a);
    printf("\n++A : %d", ++a);
    printf("\nValue changed to => A : %d", a);

    printf("\n--B : %d", --b);
    printf("\nValue changed to => B : %d", b);
    printf("\nB-- : %d", b--);
    printf("\nValue changed to => B : %d", b);

    //Relational operations
    printf("\n\n=== [Relational Operations] ===");
    printf("\nA (%d) == B (%d) (Is A equal to B?) :                         %d", a, b, a == b);
    printf("\nA (%d) != B (%d) (Is A not equal to B?) :                     %d", a, b, a != b);

    printf("\nA (%d) >  B (%d) (Is A greater than B?) :                     %d", a, b, a > b);
    printf("\nA (%d) >= B (%d) (Is A greater than or equal to B?) :         %d", a, b, a >= b);

    printf("\nA (%d) <  B (%d) (Is A less than B?) :                        %d", a, b, a < b);
    printf("\nA (%d) <= B (%d) (Is A less than or equal to B?) :            %d", a, b, a <= b);

    //Logical operations
    printf("\n\n=== [Logical Operations] ===");
    printf("\nA (%d) %% 2 == 0 || B (%d) %% 2 == 1 (A is even or B is odd) :         %d", a % 2 == 0 || b % 2 == 1);
    printf("\nA (%d) %% 2 == 0 && B (%d) %% 2 == 0 (A is even and B is even) :       %d", a % 2 == 0 || b % 2 == 0);
    printf("\n!(A (%d) == B (%d)) !(A is equal to B) => (A is not equal to B) :     %d", a, b, !(a == b));

    //Assignment operations
    printf("\n\n=== [Assignment Operations] ===");
    int result = a * 10; //Stores the value of a * 10 in the variable on result
    printf("\nResult = a * 10; Result : ", result);

    printf("\nB -= 2 => B = %d", b -= 2);
    printf("\nA += 10 => A = %d", a += 10);
    printf("\nA *= 2 => A = %d", a *= 2);
    printf("\nA /= 10 => A = %d", a /= 10);
    printf("\nA %= 10 => A = %d", a %= 10);

    //Ternary operations
    printf("\n\n=== [Ternary Operations] ===");
    printf("\nEnter the age : ");
    scanf("%d", &age);

    //Here the value of the condition is passed to the printf function as a string (Thus the %s)
    printf("%s", age >= 18 ? "The user is over 18!" : "The user is a minor!");

    //Bitwise operations
    printf("\n\n=== [Bitwise Operations] ===");
    printf("\n A (%d) | B (%d)  : %d", a, b, a | b);
    printf("\n A (%d) & B (%d)  : %d", a, b, a & b);
    printf("\n A (%d) ^ B (%d)  : %d", a, b, a ^ b);

    printf("\n~A (%d)           : %d", a, ~a);
    printf("\n~B (%d)           : %d", b, ~b);

    printf("\n A (%d) << 2      : %d", a, a << 2);
    printf("\n A (%d) >> 2      : %d", a, a >> 2);
    printf("\n B (%d) << 1      : %d", b, b << 1);
    printf("\n B (%d) >> 1      : %d", b, b >> 1);
}