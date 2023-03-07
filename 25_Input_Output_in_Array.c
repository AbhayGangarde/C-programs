/*Write a program in C to store elements in an array and print it*/
#include<stdio.h>

int main()
{
    int Arr[10];
    register int iCnt = 0;
    register int jCnt = 0;

    printf("Enter 10 elements in array :\n\n");
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("Element - %d :\n",iCnt);
        scanf("%d",&Arr[iCnt - 1]);
    }
    
    printf("elements in array are :");

    for(jCnt = 1; jCnt <= 10; jCnt++)
    {
        printf("%d ",Arr[jCnt - 1]);
    }
    

    
    return 0;
}