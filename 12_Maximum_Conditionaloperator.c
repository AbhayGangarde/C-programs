/*Write a C program to find the maximum of 2 numbers using Conditional operator (?:).
 */
#include <stdio.h>

int main()
{
    int No1 = 5;
    int No2 = 10;
    int No3 = 0;

    No3 =(No1 > No2) ? No1 : No2;

    printf("The Maximum between %d and %d is %d",No1,No2, No3);
    

    return 0;
}