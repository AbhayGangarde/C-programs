#include <stdio.h>
#include<stdlib.h>      //  For dynamic memory allocation

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of elements  : \n ");      //  1
    scanf("%d", &iSize);
    // malloc ask us how many bytes of memory you need
    ptr = (int *)malloc(iSize * sizeof(int));           //  2

    if(ptr == NULL)
    {
        printf("Unable to allocate memory.\n");
        return -1;  //  Tells OS about the failure
    }

    printf("Memory allocated successfully.\n");

    return 0;  //  Tells OS about the success
}