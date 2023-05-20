#include <stdio.h>

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int Arr [5];        //  static memory allocation
    int iCnt = 0;
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }   
    
    printf("Elements of array are : \n");
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    return 0;  //  Tells OS about the success
}