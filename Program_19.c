#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : SumOfDigits.
//  Input :         Integer.
//  Output :        Integer.
//  Description :   Returns the sum of Digits From Integer.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          03/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int SumOfDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;

        iNo = iNo / 10;
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = SumOfDigits(iValue);

    printf("%d is the sum of digits of %d.\n", iRet, iValue);

    return 0;
}