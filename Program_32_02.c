#include <stdio.h>  //  for input output
#include <stdlib.h> //  for memory management

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

    return 0;           //  return success to OS.
}