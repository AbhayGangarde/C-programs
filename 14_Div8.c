/*Check if a number is divisible by 8*/
#include<stdio.h>

int div(int A)
{
    int iCnt = 0;
    int result = 0;
    for(iCnt =1; iCnt <= 3; ++iCnt)
    {
        A /= 2;
    }

    result = A;
    return result;
}

int mul(int A)
{
    int iCnt = 0;
    int result = 0;
    for(iCnt =1; iCnt <= 3; ++iCnt)
    {
        A *= 2;
    }
    result = A;
    return result;
}

int main()
{
    int No1 = 0;
    int result = 0;
    printf("Enter a number :\n");
    scanf("%d",&No1);

    /*If the number formed by the last three digits
    of the given number is divisible by 8,
    then the given number is also divisible by 8.*/
    result = div(No1);
    
    if(No1 == mul(result))
    {
        printf("%d is divisible by 8.\n",No1);
    }
    else
    {
        printf("%d is not divisible by 8.\n",No1);
    }

    return 0;
}