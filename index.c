#include <stdio.h>
#include <string.h>
#include <math.h>

//  variable declaration
//  variable declaration is the act of declaring a variable, which is a name for a memory location.
//  Syntax: type variable_name = value;

// int a = 10;
// float b = 10.5;
// char c = 'a';
// char d[] = "Hello World!"; // string literal

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

// const int x = 10;

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

// while loop - loops through a block of code as long as a specified condition is true
// while (condition) {
//     // code block to be executed
// }

//  Arrays
//  An array is a special variable, which can hold more than one value at a time.
//  Syntax: type array_name[size];

// int arr[10] = {
//     1,
//     2,
//     3,
//     4,
//     5,
//     6,
// };

//  print("%d\n", arr[0]); // print 1

//  Multidimensional Arrays
//  A multidimensional array is an array containing one or more arrays.
//  Syntax: type array_name[size1][size2]...[sizeN];

// int arr[2][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
// };

//  print("%d", arr[0][0]); // print 1

// int main()
// {
//     // int a = 0;
//     // while (a < 10)
//     // {
//     //     if (a == 5)
//     //     {
//     //         a++;
//     //         continue;
//     //     }
//     //     // printf("%d\n", a);
//     //     a++;
//     // }
//     //  find the largest number in an arr in each row
//     // int arr[2][3] = {
//     //     {1, 2, 3},
//     //     {4, 10, 6},
//     // };
//     // int max = arr[0][0];
//     // for (int i = 0; i < 2; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (arr[i][j] > max)
//     //         {
//     //             max = arr[i][j];
//     //         }
//     //     }
//     // }
//     // char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     // printf("%lu\n", strlen(alphabet)); // print 26 (length of alphabet)
//     // printf("%lu", sizeof(alphabet));   // print 27

//     // char str1[20] = "Hello";
//     // char str2[] = "World";
//     // strcat(str1, str2);
//     // printf("%s", str1); // print HelloWorld

//     // printf("%d", sizeof(a));  // print 10
//     // // (char)a;                  // convert int to char
//     // // printf("%c", !!a);        // print a

//     // char str1[20] = "Hello";
//     // char str2[20];
//     // strcpy(str2, str1);
//     // printf("%s", str2); // print Hello

//     // char str1[20] = "Hello";
//     // char str2[20] = "Hello";
//     // if (strcmp(str1, str2) == 0)
//     // {
//     //     printf("Equal");
//     // }
//     // else
//     // {
//     //     printf("Not Equal");
//     // }

//     // User Input
//     // User input is the data provided by the user.
//     // scanf() function is used to get user input. It get only one value at a time.
//     // fgets() function is used to get user input. It get multiple values at a time.
//     // int myNum;
//     // printf("Enter a number: ");
//     // scanf("%d", &myNum);
//     // printf("You entered: %d", myNum);

//     // char myName[20];
//     // printf("Enter your name: ");
//     // fgets(myName, sizeof(myName), stdin);
//     // printf("Your name is: %s", myName);

//     // C Memory Addresses
//     // Memory address is the location of a value in memory.
//     int a = 10;
//     printf("%p\n", &a); // print Memory Address of a
//                         // &a - is often called the address-of operator or pointer-to operator.
//                         // %p - is used to print the memory address of a variable.

//     //  Pointers
//     //  A pointer is a variable that stores the memory address of another variable.
//     //  Syntax: type *var-name;
//     int *p;
//     p = &a;
//     printf("%p", p); // print Memory Address of a

//     return 0;
// }

//  C Functions
//  A function is a block of code which only runs when it is called.
//  You can pass data, known as parameters, into a function.
//  Functions are used to perform certain actions, and they are also known as methods.

//  predefined functions
// predefined functions are functions that are already defined in the C language.
//  printf() - used to print output to the screen

// Syntax: return_type function_name(parameter list) {
//     // body of the function
// }

// void myFunction() {
//     printf("Hello World!");
// }

// int main() {
//     myFunction(); // call the function
//     return 0;
// }

//  C Function parameters
//  Information can be passed to functions as parameter.
//  Parameters act as variables inside a function.
//  The following example has a function that takes a name as a parameter and prints it inside the function.
//  Syntax: return_type function_name(parameter list) {
//     // body of the function
// }

//  void function indicating that the function does not return a value.
//  int function indicating that the function returns an integer value.
//  char function indicating that the function returns a character value.
//  and so on.

// void myFunction(char name[], int age, int myArr[5])
// {
//     printf("%s %d", name, age);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", myArr[i]);
//     }
// }

// int add(int a)
// {
//     int sum = a + 3;
//     return sum;
// }

// int main()
// {
//     // int myArr[5] = {1, 2, 3, 4, 5};
//     // myFunction("John ", 22, myArr); // call the function
//     printf("%d", add(10));
//     return 0;
// }

//  C Recursion
//  Recursion is a process in which a function calls itself directly or indirectly.
//  It is a way of programming or coding a problem, in which a function calls itself one or more times in its body.

//  C Recursion Example
//  The following example shows how to calculate the factorial of a number using recursion.

// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// int sum(int a)
// {
//     if (a == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return a + sum(a - 1);
//     }
// }

// int main()
// {
//     int n = 6;
//     printf("%d\n", factorial(n));
//     printf("%d", sum(10));
//     return 0;
// }

//  C Maths Library
//  The C standard library provides a set of functions that perform mathematical operations.
//  The header file <math.h> is used to access these functions.

// sqrt() - returns the square root of a number
// pow() - returns the value of a number raised to a power
// ceil() - returns the smallest integer value that is not less than the argument
// floor() - returns the largest integer value that is not greater than the argument
// abs() - returns the absolute value of an integer

//  C Structures
//  A structure is a user-defined data type in C that allows us to combine data items of different kinds.

//  C Structures Example
//  The following example shows how to define and use a structure in C.

// struct Books
// {
//     char title[50];
//     char author[50];
//     char subject[100];
//     int book_id;
// };

// int main()
// {
//     struct Books Book1;
//     struct Books Book2;

//     strcpy(Book1.title, "C Programming");
//     strcpy(Book1.author, "Nuha Ali");
//     strcpy(Book1.subject, "C Programming Tutorial");
//     Book1.book_id = 6495407;

//     strcpy(Book2.title, "Telecom Billing");
//     strcpy(Book2.author, "Zara Ali");
//     strcpy(Book2.subject, "Telecom Billing Tutorial");
//     Book2.book_id = 6495700;

//     printf("Book 1 title: %s\n", Book1.title);
//     printf("Book 1 author: %s\n", Book1.author);
//     printf("Book 1 subject: %s\n", Book1.subject);
//     printf("Book 1 book_id: %d\n\n", Book1.book_id);

//     printf("Book 2 title: %s\n", Book2.title);
//     printf("Book 2 author: %s\n", Book2.author);
//     printf("Book 2 subject: %s\n", Book2.subject);
//     printf("Book 2 book_id: %d\n", Book2.book_id);

//     return 0;
// }

// struct User
// {
//     char name[50];
//     int age;
//     char email[50];
// };

// int main()
// {
//     struct User User1;
//     strcpy(User1.name, "Mustafa");
//     User1.age = 22;
//     // OR
//     struct User User2 = {
//         "Mustafa2",
//         22,
//     };
//     // OR
//     struct User User3;
//     User3 = User2;

//     printf("%s\n", User1.name);
//     printf("%d\n", User1.age);

//     printf("%s\n", User2.name);
//     printf("%d\n", User2.age);
// }

// ===================================== C Enumerations =====================================

//  C Enumerations
//  An enumeration is a user-defined data type in C that consists of integral constants.
//  The keyword enum is used to define an enumeration.

//  C Enumerations Example
//  The following example shows how to define and use an enumeration in C.

// enum Level
// {
//     BEGINNER = 10,     // default value is 0 if not specified and increments by 1 for each value after that
//     INTERMEDIATE = 20, // if we specify a value, the next value will increment by 1 from that value
//     EXPERT = 30
// };

// int main()
// {
//     enum Level myLevel = EXPERT;
//     printf("%d", myLevel);
//     return 0;˜
// }

int main() 
{
    int i = 1;

    do 
    {
        printf("%d", i);
    } while (i <= 0 )

    return 0;
}