// Accept two numbers from user and add them and return it's value.

#include <stdio.h>              //Header Inclusion statement.

int main()                      //Entry point function.
{
    // Three local variables gets seperate memory for individual variable.
    // integer gets 4 bytes of memory.
    // This program is written in dynamic input format

    int No1 = 0;
    int No2 = 0;
    int Ans = 0;

    printf("Enter first number : \n");
    scanf("%d", &No1);

    printf("Enter second number : \n");
    scanf("%d", &No2);

    // Addition is a operation performed on No1 and No2.

    Ans = No1 + No2;

    // %d is a format specifier used for integers.

    printf("Addition is : %d.\n", Ans);

    return 0;
}