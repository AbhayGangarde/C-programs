//  Check the count of 8 in given integer. 
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckFrequency.
//  Input :         Integer.
//  Output :        bool.
//  Description :   checks the count of 8 in given number.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int CheckFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
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

    iRet = CheckFrequency(iValue);

    printf("8 is present %d times in %d.\n", iRet, iValue);

    return 0;
}