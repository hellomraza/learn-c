#include <stdio.h>

//  variable declaration
//  variable declaration is the act of declaring a variable, which is a name for a memory location.
//  Syntax: type variable_name = value;

int a = 10;
float b = 10.5;
char c = 'a';
char d[] = "Hello World!"; // string literal

//  Format Specifiers
// Format specifiers are used to print the value of a variable in a specific format.
//  %d - integer
//  %f - float
//  %c - character
//  %s - string
// %lf - double

//  Type Conversion
//  Type conversion is the act of converting a variable from one type to another.
//  Syntax: (type) variable_name;

// constant declaration
//  constant declaration is the act of declaring a constant, which is a name for a memory location.
//  Syntax: const type variable_name = value;

const int x = 10;

//  Operators
//  Operators are used to perform operations on variables and values.
//  Arithmetic Operators
//  Arithmetic operators are used to perform arithmetic operations.
//  + - * / % ++ --

//  Assignment Operators
//  Assignment operators are used to assign values to variables.
//  = += -= *= /= %= <<= >>= &= ^= |=

//  Comparison Operators
//  Comparison operators are used to compare two values.
//  == != > < >= <=

//  Logical Operators
//  Logical operators are used to determine the logic between variables or values.
//  && || !

//  Bitwise Operators
//  Bitwise operators are used to perform bitwise operations on variables or values.
//  & | ^ ~ << >>

//  Conditional Operators
//  Conditional operators are used to perform conditional operations.
//  ?: (ternary operator)

//  sizeof() Operator
//  The sizeof() operator returns the size of a variable or data type.

// if statement - executes some code if one condition is true
// if (condition) {
//     // code to be executed if condition is true
// }

// if else statement - executes some code if a condition is true and another code if that condition is false
// if (condition) {
//     // code to be executed if condition is true
// } else {
//     // code to be executed if condition is false
// }

// else if statement - executes different codes for more than two conditions
// if (condition1) {
//     // code to be executed if condition1 is true
// } else if (condition2) {
//     // code to be executed if the condition1 is false and condition2 is true
// } else {
//     // code to be executed if the condition1 is false and condition2 is false
// }

// switch statement - selects one of many code blocks to be executed
// switch (expression) {
//     case x:
//         // code to be executed if expression = x
//         break;
//     case y:
//         // code to be executed if expression = y
//         break;
//     default:
//         // code to be executed if expression doesn't match any cases
// }

int main()
{
    int a = 0;
    while (a > 10)
    {
        printf("%d", a);
    }

    // printf("Hello World!\n"); // print Hello World!
    // printf("%d", sizeof(a));  // print 10
    // // (char)a;                  // convert int to char
    // // printf("%c", !!a);        // print a
    // return 0;
}
