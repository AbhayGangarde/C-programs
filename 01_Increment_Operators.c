#include<stdio.h>

int main()
{
    //For increment/decrement operators.
    int A = 1;
    int B = 2;

    /*you can't give directly 2 over here 
    because 2 is a constant, so it doesn't 
    have modifiable L - value.*/

    // ++A or A++  is equivalent to 'A = A + B'
    A = ++B;                // pre-increment operator
    B = A++;                   // post-increment operator

    printf("%d\n", A);
    printf("%d", B);

    return 0;
}