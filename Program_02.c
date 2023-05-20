//take two numbers and add them and return it's value.

#include <stdio.h>

int main()                      //Entry point function.
{
    // Three local variables gets seperate memory for individual variable.
    // integer gets 4 bytes of memory.
    // this program is written in static input fromat

    int No1 = 10;
    int No2 = 11;
    int Ans = 0;

    // Addition is a operation performed on No1 and No2.

    Ans = No1 + No2;

    // %d is a format specifier used for integers.

    printf("%d\n", Ans);

    return 0;
}