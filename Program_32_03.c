#include <stdio.h>  //  for input output
#include <stdlib.h> //  for memory management

///////////////////////////////////////////////////////////////////
//
//  Function Name : Demo.
//  Input :         
//  Output :        void.
//  Description :   
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          10/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

//  void Demo(int *Arr, int iLength)
void Demo(int Arr[], int iLength)       // Here we are calling array by address
{
    //  Step 5 : Perform the operation on array.
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;      //  To store size of array.
    int * ptr = NULL;   //  To store address of array
    int iCnt = 0;       //Loop counter.

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

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    // Step 4 : Pass the array to the function.
    Demo(ptr, iSize);       //Demo(400, 4);

    // Step 6 : Deallocate the memory of array.
    free(ptr);

    return 0;           //  return success to OS.
}