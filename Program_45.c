//  accept n numbers from user as well as accept one number and return first occurance of that number.
#include <stdio.h>      //  for input / output functions
#include <stdlib.h>     //  for dynamic memory functions

#define ERR_NOTFOUND -1

///////////////////////////////////////////////////////////////////
//
//  Function Name : SearchFirstOccurance.
//  Input :         pointer, Integer1, Integer2
//  Output :        bool.
//  Description :   find first occurance of element iNo in n numbers or not.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          14/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int SearchFirstOccurance(int Arr[], int iLength, int iNo)
{
    //  Step 5 : Perform the operation on array.
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;      //  to store number of elements
    int iValue = 0;     //  to store number we want to search
    int iCnt = 0;       //  loop counter
    int iRet = 0;  //  variable to store return value of function
    int * ptr = NULL;   //  pointer

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

    printf("Enter a number you want to search : \n");
    scanf("%d", &iValue);

    // Step 4 : Pass the array to the function.
    iRet = SearchFirstOccurance(ptr, iSize, iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("%d is present not present in numbers.\n", iValue);
    }
    else
    {
        printf("%d is present at %d index.\n", iValue, iRet);
    }

    // Step 6 : Deallocate the memory of array.
    free(ptr);

    return 0;       //  Return success to OS.
}