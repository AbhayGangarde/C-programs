//  accept n numbers from user and find maximum and minimum numbers from it.
#include <stdio.h>      //  for input / output functions
#include <stdlib.h>     //  for dynamic memory functions

///////////////////////////////////////////////////////////////////
//
//  Function Name : MaxandMinNumber.
//  Input :         pointer, Integer
//  Output :        void.
//  Description :   prints maximum and minimum elements from n numbers
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          14/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void MaxandMinNumber(int Arr[], int iLength)
{
    //  Step 5 : Perform the operation on array.
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }

    printf("%d is the maximum number.\n", iMax);
    printf("%d is the minimum number.\n", iMin);
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int * ptr = NULL;

    //  Step 1 : Accept the number of elemets from the user
    printf("Enter the number of elements you want to add : \n");
    scanf("%d", &iSize);

    //  Step 2 : Allocate memory Dynamically
    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter %d numbers below : \n", iSize);

    //  Step 3 : Accept the values from the user.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of the array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // Step 4 : Pass the array to the function.
    MaxandMinNumber(ptr, iSize);

    // Step 6 : Deallocate the memory of array.
    free(ptr);

    return 0;       //  Return success to OS.
}