/*Write a program in C to copy the elements of one array into another array.*/
#include<stdio.h>

int main()
{
    int Arr[10];
    int Brr[10];
    int iCnt = 0;
    int jCnt = 0;
    int kCnt = 0;
    int lCnt = 0;

    printf("Enter 10 Numbers :\n");

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("Element %d is :\n",iCnt);
        scanf("%d",&Arr[iCnt - 1]);
    }

    for (jCnt = 1; jCnt <= 10; jCnt++)
    {
        Brr[jCnt - 1] = Arr[jCnt - 1];
    }

    printf("The elements stored in the first array are :\n");
    
    for (kCnt = 1; kCnt <= 10; kCnt++)
    {
        printf("%d  ",Arr[kCnt - 1]);
    }

    printf("\nThe elements copied into the second array are :\n");
    
    for (lCnt = 1; lCnt <= 10; lCnt++)
    {
        printf("%d  ",Brr[lCnt - 1]);
    }
    

    return 0;
}