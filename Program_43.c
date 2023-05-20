//  accept n numbers from user as well as take another number also and check whether that number is present in n numbers or not.
#include <stdio.h>      //  for input / output functions
#include <stdlib.h>     //  for dynamic memory functions
#include <stdbool.h>    //  for boolean 

///////////////////////////////////////////////////////////////////
//
//  Function Name : Search.
//  Input :         pointer, Integer1, Integer2
//  Output :        bool.
//  Description :   check if element iNo is present in n numbers or not.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          14/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

/*
bool Search(int Arr[], int iLength, int iNo)
{
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
        return false;
    }
    else
    {
        return true;
    }
}
*/

bool Search(int Arr[], int iLength, int iNo)
{
    //  Step 5 : Perform the operation on array.
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;      //  to store number of elements
    int iValue = 0;     //  to store number we want to search
    int iCnt = 0;       //  loop counter
    int * ptr = NULL;   //  pointer
    bool bRet = false;  //  variable to store returnvalue of function

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
    bRet = Search(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is present.\n", iValue);
    }
    else
    {
        printf("%d is not present.\n", iValue);
    }

    // Step 6 : Deallocate the memory of array.
    free(ptr);

    return 0;       //  Return success to OS.
}