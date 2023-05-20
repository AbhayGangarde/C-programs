//  find smallest digits of integer given by user. 
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : SmallestDigit.
//  Input :         Integer.
//  Output :        Integer.
//  Description :   finds smallest digits in the integer.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int SmallestDigit(int iNo)
{
    int iDigit = 0;
    int iSmall = 9;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iSmall >iDigit )
        {
            iSmall = iDigit;
        }

        if(iSmall == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }

    return iSmall;
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

    iRet = SmallestDigit(iValue);

    printf("%d is the smallest digit in %d.\n", iRet, iValue);

    return 0;
}