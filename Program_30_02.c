//  find smallest digits of integer given by user. 
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : LargestDigit.
//  Input :         Integer.
//  Output :        Integer.
//  Description :   finds largest digits in the integer.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int LargestDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax < iDigit )
        {
            iMax = iDigit;
        }

        if(iMax == 9)
        {
            break;
        }
        iNo = iNo / 10;
    }

    return iMax;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    iRet = LargestDigit(iValue);

    printf("%d is the largest digit in %d.\n", iRet, iValue);

    return 0;
}