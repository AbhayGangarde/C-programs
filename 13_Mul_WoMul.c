/*Multiply two numbers without using multiplication operator.*/
#include<stdio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int iCnt = 0;
    int Result = 0;
    /*
    3 X 4 = 12 = 3 + 3 + 3 + 3 = 4 + 4 + 4
    */
    printf("Enter first number :\n");
    scanf("%d",&No1);

    printf("Enter second number :\n");
    scanf("%d",&No2);

    for(iCnt = 1;iCnt <= No2; ++iCnt)
    {
        Result += No1;
    }

    printf("The multiplication of %d and %d is %d.\n",No1, No2,Result);

    return 0;
}