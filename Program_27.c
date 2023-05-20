//  Reverse integer given by user. 
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : ReverseNumber.
//  Input :         Integer.
//  Output :        Integer.
//  Description :   Reverse given number.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iReverse = (iReverse * 10) + iDigit; 
        iNo = iNo / 10;
    }

    return iReverse;
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

    iRet = ReverseNumber(iValue);

    printf("Reverse of %d is %d.\n", iValue, iRet);

    return 0;
}