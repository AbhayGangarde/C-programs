/*Write a program in C to find the sum of all elements of the array.*/
#include<stdio.h>

int Addition(int Arr[10])
{
    int Result = 0;
    int jCnt = 0;

    for(jCnt = 1; jCnt <= 10; jCnt++)
    {
        // Result = Result + Arr[jCnt - 1];
        Result += Arr[jCnt - 1];
    }

    return Result;
}

int main()
{
    int Arr[10];
    int iCnt = 0;
    signed int Sum = 0;

    printf("Enter any 10 Numbers you want, I'll tell you the addition of them :\n");

    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        printf("Enter Number %d :\n",iCnt);
        scanf("%d",&Arr[iCnt - 1]);
    }

    Sum = Addition(Arr);

    printf("The addition of numbers you've entered is :\n%d",Sum);

    return 0;
}