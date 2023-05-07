// // Code for addition of two numbers
// #include<stdio.h>

// int main()
// {
//   int num1, num2, sum;
//   printf("Enter first number: ");
//   scanf("%d", &num1);
//   printf("Enter second number: ");
//   scanf("%d", &num2);

//   sum = num1 + num2;
//   printf("Sum of the entered numbers: %d\n", sum);
//   return 0;
// }

// ------------------------------------------------------------------------------------//

// Write a c program for addition of two numbers using function
// #include <stdio.h>

// int sum(int a, int b); // Function declaration

// int main()
// {
//     int num1, num2, result;
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     result = sum(num1, num2); // function call
//     printf("Sum of %d and %d is %d\n", num1, num2, result);
//     return 0;
// }

// int sum(int a, int b) // Function definition
// {
//     int result;
//     result = a + b;
//     return result; // Return statement
// }

// ------------------------------------------------------------------------------------//

//  Write a c program to calculate simple interest.
// #include <stdio.h>

// int main()
// {
//     float principle, rate, years, simpleInterest;

//     printf("Enter principle amount: ");
//     scanf("%f", &principle);

//     printf("Enter rate of interest: ");
//     scanf("%f", &rate);

//     printf("Enter number of years: ");
//     scanf("%f", &years);

//     simpleInterest = (principle * rate * years) / 100;

//     printf("Simple interest = %f\n", simpleInterest);
//     return 0;
// }

// ------------------------------------------------------------------------------------//

// Write a c program to calculate simple interest using function
// #include <stdio.h>

// float simpleInterest(float principle, float rate, float years); // Function declaration

// int main()
// {
//     float principle, rate, years, interest;
//     printf("Enter principle amount: ");
//     scanf("%f", &principle);

//     printf("Enter rate of interest: ");
//     scanf("%f", &rate);

//     printf("Enter number of years: ");
//     scanf("%f", &years);

//     interest = simpleInterest(principle, rate, years); // function call
//     printf("Simple interest = %f\n", interest);
//     return 0;
// }

// float simpleInterest(float principle, float rate, float years) // Function definition
// {
//     float interest;
//     interest = (principle * rate * years) / 100;
//     return interest; // Return statement
// }

// ------------------------------------------------------------------------------------//

//  Write a c program to design simple calculator.
// #include <stdio.h>

// int main()
// {
//   int num1, num2, add, sub, mul;
//   float div;

//   printf("Enter first number: ");
//   scanf("%d", &num1);
//   printf("Enter second number: ");
//   scanf("%d", &num2);

//   add = num1 + num2;
//   sub = num1 - num2;
//   mul = num1 * num2;
//   div = num1 / num2;

//   printf("Sum of the entered numbers: %d\n", add);
//   printf("Difference of the entered numbers: %d\n", sub);
//   printf("Multiplication of the entered numbers: %d\n", mul);
//   printf("Division of the entered numbers: %f\n", div);
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// //  Write a c program to calculate the division obtained by students of five subjects.
// #include <stdio.h>

// int main()
// {
//     int sub1, sub2, sub3, sub4, sub5;
//     float total, average, percentage;

//     printf("Enter marks of five subjects out of 100: ");
//     scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);

//     total = sub1 + sub2 + sub3 + sub4 + sub5;
//     average = total / 5.0;
//     percentage = (total / 500.0) * 100;

//     printf("Total marks = %.2f\n", total);
//     printf("Average marks = %.2f\n", average);
//     printf("Percentage = %.2f\n", percentage);
//     return 0;
// }

// ------------------------------------------------------------------------------------//
// Write a C Program to check leap year.
// #include <stdio.h>

// int main()
// {
//     int year;

//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if (year % 400 == 0) // Leap year is always divisible by 400
//     {
//         printf("%d is a leap year.\n", year);
//     }
//     else if (year % 100 == 0)
//     {
//         // If a year is divisible by 100, then it is not a leap year
//         printf("%d is not a leap year.\n", year);
//     }
//     else if (year % 4 == 0)
//     {
//         // If a year is divisible by 4, then it is a leap year
//         printf("%d is a leap year.\n", year);
//     }
//     else
//     {
//         // If a year is not divisible by 4, then it is not a leap year
//         printf("%d is not a leap year.\n", year);
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------//
// Find all roots of a quadratic equation
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//   float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
//   printf("Enter coefficients a, b and c (ax^2 + bx + c = 0): ");
//   scanf("%f%f%f", &a, &b, &c);
//   discriminant = b * b - 4 * a * c;
//   // condition for real and different roots
//   if (discriminant > 0)
//   {
//     // sqrt() function returns square root
//     root1 = (-b + sqrt(discriminant)) / (2 * a);
//     root2 = (-b - sqrt(discriminant)) / (2 * a);
//     printf('The roots are real and different\n');
//     printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
//   }
//   // condition for real and equal roots
//   else if (discriminant == 0)
//   {
//     root1 = root2 = -b / (2 * a);
//     printf('The roots are real and equal\n');
//     printf("root1 = root2 = %.2f\n", root1);
//   }
//   // if roots are not real
//   else
//   {
//     realPart = -b / (2 * a);
//     imaginaryPart = sqrt(-discriminant) / (2 * a);
//     printf('The roots are complex and different\n');
//     printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
//   }
//   return 0;
// }


// ------------------------------------------------------------------------------------//
// // Calculate the power of a number.
// #include <stdio.h>

// int main()
// {
//   int base, exponent;
//   long long result = 1;
//   printf("Enter a base number: ");
//   scanf("%d", &base);
//   printf("Enter an exponent: ");
//   scanf("%d", &exponent);
//   while (exponent != 0)
//   {
//     result *= base;
//     --exponent;
//   }
//   printf("Answer = %lld\n", result);
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 10. Write a c program from 1 to 10 using goto statement.

// #include <stdio.h>

// int main()
// {
//   int i = 1;
//   start:
//   printf("%d\n", i);
//   i++;
//   if (i <= 10)
//   {
//     goto start;
//   }
//   return 0;
// }

// ------------------------------------------------------------------------------------//
//11. C program to check if a number is even or not using goto statement

// #include <stdio.h>

// int main()
// {
//   int num;
//   printf("Enter an integer: ");
//   scanf("%d", &num);
//   if (num % 2 == 0)
//   {
//     goto even;
//   }
//   else
//   {
//     goto odd;
//   }
//   even:
//   printf("%d is an even number.\n", num);
//   goto end;
//   odd:
//   printf("%d is an odd number.\n", num);
//   end:
//   return 0;
// }

// ------------------------------------------------------------------------------------//

// 12. Program to find the average of n numbers using arrays

// #include <stdio.h>

// int main()
// {
//   int n, i;
//   float num[100], sum = 0.0, average;
//   printf("Enter the numbers of elements (1 to 100): ");
//   scanf("%d", &n);
//   while (n > 100 || n <= 0)
//   {
//     printf("Error! number should in range of (1 to 100).\n");
//     printf("Enter the number again: ");
//     scanf("%d", &n);
//   }
//   for (i = 0; i < n; ++i)
//   {
//     printf("%d. Enter number: ", i + 1);
//     scanf("%f", &num[i]);
//     sum += num[i];
//   }
//   average = sum / n;
//   printf("Average = %.2f\n", average);
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 13. C program to demonstrate explicit type casting

// #include <stdio.h>

// int main()
// {
//   int sum = 17, count = 5;
//   double mean;
//   mean = (doubliette)sum / count;
//   printf("Value of mean : %f\n", mean);
//   return 0;
// }

// ------------------------------------------------------------------------------------//`
// 14. Write a c program to find largest number of three numbers using ternary operator.

// #include <stdio.h>

// int main()
// {
//   int num1, num2, num3, result;
//   printf("Enter the first number: ");
//   scanf("%d", &num1);
//   printf("Enter the second number: ");
//   scanf("%d", &num2);
//   printf("Enter the third number: ");
//   scanf("%d", &num3);
//   result = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
//   printf("Largest number = %d\n", result);
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 15.Write a c program to demonstrate continue statement.

// #include <stdio.h>

// int main()
// {
//   int i, num;
//   printf("Enter the maximum value: ");
//   scanf("%d", &num);
//   for (i = 1; i <= num; ++i)
//   {
//     if (i % 2 == 0)
//     {
//       continue;
//     }
//     printf("%d\n", i);
//   }
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 16. Write a c program to demonstrate continue and break statement.

// #include <stdio.h>

// int main()
// {
//   int i, num;
//   printf("Enter the maximum value: ");
//   scanf("%d", &num);
//   for (i = 1; i <= num; ++i)
//   {
//     if (i % 2 == 0)
//     {
//       continue;
//     }
//     if (i == 11)
//     {
//       break;
//     }
//     printf("%d\n", i);
//   }
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 17. Write a C Program to swap two numbers without using third variable.

// #include <stdio.h>

// int main()
// {
//   int num1, num2;
//   printf("Enter the first number: ");
//   scanf("%d", &num1);
//   printf("Enter the second number: ");
//   scanf("%d", &num2);
//   num1 = num1 + num2;
//   num2 = num1 - num2;
//   num1 = num1 - num2;
//   printf("After swapping, num1 = %d\n", num1);
//   printf("After swapping, num2 = %d\n", num2);
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 18. Write a C Program to swap two numbers using third variable.

// #include <stdio.h>

// int main()
// {
//   int num1, num2, temp;
//   printf("Enter the first number: ");
//   scanf("%d", &num1);
//   printf("Enter the second number: ");
//   scanf("%d", &num2);
//   temp = num1;
//   num1 = num2;
//   num2 = temp;
//   printf("After swapping, num1 = %d\n", num1);
//   printf("After swapping, num2 = %d\n", num2);
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 19.Write a C Program to convert temperature from Celsius to Fahrenheit.

// #include <stdio.h>

// int main()
// {
//   float celsius, fahrenheit;
//   printf("Enter temperature in Celsius: ");
//   scanf("%f", &celsius);
//   fahrenheit = (celsius * 9 / 5) + 32;
//   printf("%f Celsius = %f Fahrenheit\n", celsius, fahrenheit);
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 20. Write a C Program to check given number is positive or negative.

// #include <stdio.h>

// int main()
// {
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   if (num > 0)
//   {
//     printf("%d is a positive number.\n", num);
//   }
//   else if (num < 0)
//   {
//     printf("%d is a negative number.\n", num);
//   }
//   else
//   {
//     printf("0 is neither positive nor negative.\n");
//   }
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 21. Write a C Program to find greatest common divisor (GCD) of two numbers.

// #include <stdio.h>

// int main()
// {
//   int n1, n2, i, gcd;
//   printf("Enter two integers: ");
//   scanf("%d %d", &n1, &n2);
//   for (i = 1; i <= n1 && i <= n2; ++i)
//   {
//     if (n1 % i == 0 && n2 % i == 0)
//       gcd = i;
//   }
//   printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
//   return 0;
// }

// ------------------------------------------------------------------------------------//
// 22. Write a C program to find LCM and HCF of two numbers.

#include <stdio.h>

int main()
{
  int n1, n2, i, gcd, lcm;
  printf("Enter two integers: ");
  scanf("%d %d", &n1, &n2);
  for (i = 1; i <= n1 && i <= n2; ++i)
  {
    if (n1 % i == 0 && n2 % i == 0)
      gcd = i;
  }
  lcm = (n1 * n2) / gcd;
  printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
  printf("L.C.M of %d and %d is %d\n", n1, n2, lcm);
  return 0;
}