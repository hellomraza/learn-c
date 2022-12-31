#include <stdio.h>
#include <math.h>

// Write a C program to print a block F using hash (#), where the F has a height of six characters and width of five and four characters. And also to print a big 'C'
// Expected Output:

// ######
// #
// #
// #####
// #
// #

//    ######
//   ##      ##
//  #
//  #
//  #
//  #
//  #
//   ##      ##
//     ######

// Solution

// int main()
// {
//     printf("######\n#\n#\n#####\n#\n#\n");

//     printf("   ###### \n ##      ##\n#\n#\n#\n#\n#\n ##      ##\n   ######\n");
//     return 0;
// }

//  Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle is : 24 inches
// Area of the rectangle is : 35 square inches

// Solution

// int main()
// {
//     int height = 7;
//     int width = 5;

//     int area = height * width;
//     int perimeter = 2 * (height + width);

//     printf("Perimeter of the rectangle = %d inches\n", perimeter);
//     printf("Area of the rectangle = %d sq inches\n", area);
// }

//  Write a C program to compute the perimeter and area of a circle with a given radius of 6 inches.
// Expected Output:
// Perimeter of the circle is : 37.68 inches
// Area of the circle is : 113.04 square inches

//  Solution;

// int main()
// {

//     // both are right

//         // int radius;
//     // float perimeter, area;
//     // radius = 6;

//     // perimeter = 2 * 3.14 * radius;
//     // area = 3.14 * radius * radius;

//     // printf("Perimeter of the circle is : %f inches\n", perimeter);

//     // printf("Area of the circle is : %f square inches", area);

//     int radius;
//     float area, perimeter;
//     radius = 6;

//     perimeter = 2 * 3.14 * radius;
//     printf("Perimeter of the Circle = %f inches\n", perimeter);

//     area = 3.14 * radius * radius;
//     printf("Area of the Circle = %f square inches\n", area);

//     return (0);
// }

// Write a C program to convert specified days into years, weeks and days
// Expected Output:
// Number of days : 1329
// Years: 3
// Weeks: 33
// Days: 3

// Solution

// int main()
// {
//     int totalDays;
//     printf("Enter the number of days: ");
//     scanf("%d", &totalDays);
//     int years = 0, weeks = 0, days = 0;
//     //  MY SOLUTION
//     // day = totalDays % 365 % 7;
//     // printf("%d", day);

//     // for (int i = totalDays; i > 0;)
//     // {
//     //     i -= 365;
//     //     if (i <= 0)
//     //     {
//     //         break;
//     //     }
//     //     year++;
//     // }

//     // for (int i = (totalDays % 365); i > 0;)
//     // {
//     //     i -= 7;
//     //     if (i <= 0)
//     //     {
//     //         break;
//     //     }
//     //     week++;
//     // }

//     //  SOLUTION
//     years = (totalDays / 365);
//     weeks = (totalDays % 365) / 7;
//     days = (totalDays % 365) % 7;

//     printf("Number of days : %d\n", totalDays);
//     printf("Years: %d\n", years);
//     printf("Weeks: %d\n", weeks);
//     printf("Days: %d\n", days);
//     return 0;
// }

// Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one.
// Expected Output:
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 2
// element - 1 : 3
// element - 2 : 2
// The number that appears the least number of times is : 3

// Solution

int main()
{
    int n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int minCount = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count < minCount)
        {
            minCount = count;
            min = arr[i];
        }
    }
    printf("The number that appears the least number of times is : %d\n", min);
    return 0;
}
