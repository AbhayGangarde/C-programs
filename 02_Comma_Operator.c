#include<stdio.h>

int main()
{
    /*Comma opearator is */
    int A = 1;
    int B = 0;
    int C = (1, 2, 3, 4, B = 15);

    printf("%d\n", A); 
    printf("%d\n", C); 

    return 0;
}