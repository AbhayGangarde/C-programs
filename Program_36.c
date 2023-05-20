//  take n numbers from users and count even numbers from those numbers.
#include <stdio.h>  //  for input output
#include <stdlib.h> //  for memory management

///////////////////////////////////////////////////////////////////
//
//  Function Name : EvenCount.
//  Input :         pointer, Integer
//  Output :        Integer.
//  Description :   Count even numbers from n nubers
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          10/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int EvenCount(int Arr[], int iLength)       // Here we are calling array by address
{
    //  Step 5 : Perform the operation on array.
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;      //  To store size of array.
    int * ptr = NULL;   //  To store address of array
    int iCnt = 0;       //Loop counter.
    int iRet = 0;

    //  Step 1 : Accept the number of elemets from the user
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    //  Step 2 : Allocate memory Dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //  Step 3 : Accept the values from the user.
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }


    // Step 4 : Pass the array to the function.
    iRet = EvenCount(ptr, iSize);

    printf("%d are the number of even elements.\n", iRet);

    // Step 6 : Deallocate the memory of array.
    free(ptr);

    return 0;           //  return success to OS.
}