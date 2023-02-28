#include<stdio.h>

int main()
{
    /*
    Logical Operators

    Listed precedance wise...
    i.   Logical Not [Associativity(R --> L)]
    ii.  Logical And [Associativity(L --> R)]
    iii. Logical Or  [Associativity(L --> R)]
    
    */

   /*Logical AND Operator*/
    register int A = 5;
    int B = 0;
    int C = 0;
    int D = 0;

    // printf("Enter the first number :\n");
    // scanf("%d", &A);

    printf("Enter the second number :\n");
    scanf("%d", &B);

    printf("Enter the third number :\n");
    scanf("%d", &C);

    if((A < B) && (B >= C))
    {
        printf("%d is greater than %d and %d.\n\n",B,A,C);
    }
    else if((A > B) && (A >= C))
    {
        printf("%d is greater than %d and %d.\n\n",A,B,C);
    }
    else
    {
        printf("%d is greater than %d and %d.\n\n",C,A,B);
    }

    /*Logical OR Operator*/
    if ((A > B) || (A > C))
    {
        D = (A > B) || (A > C);
    }
    else if((B > A) || (B > C))
    {
        D = (B > A) || (B > C);
    }
    else
    {
        D = (C > A) || (C > B);
    }

    printf("The value of D is : %d\n\n",D);

    /*Logical NOT Operator*/
    printf("%d\n",!(A > B));
    printf("%d\n",!(C > A));
    printf("%d\n",!(B > C));
    return 0;
}