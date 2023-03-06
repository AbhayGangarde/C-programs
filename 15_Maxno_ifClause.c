#include <stdio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int No3 = 0;

    printf("Enter first number :\n");
    scanf("%d", &No1);

    printf("Enter second number :\n");
    scanf("%d", &No2);

    printf("Enter third number :\n");
    scanf("%d", &No3);

    if (No1 > No2 && No1 > No3)
    {
        printf("%d is greater than %d and %d.\n", No1, No2, No3);
    }
    else if (No2 > No1 && No2 > No3)
    {
        printf("%d is greater than %d and %d.\n", No2, No1, No3);
    }
    else
    {
        printf("%d is greater than %d and %d.\n", No3, No2, No1);
    }

    return 0;
}