/*Write a program in C to read n number of values in an array and display it in reverse order.*/
#include<stdio.h>

int main()
{
    int Arr[10];
    int iCnt = 0;
    int jCnt = 0;

    printf("Enter 10 numbers :\n\n");

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("Element no. - %d :\n",iCnt);
        scanf("%d",&Arr[iCnt - 1]);
    }

    printf("Given Numbers in reversed Ordered :\n");

    for(jCnt = 10; jCnt >= 1; jCnt--)
    {
        printf("%d.\n",Arr[jCnt - 1]);
    }

    return 0;
}