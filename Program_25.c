//  Check count of even digits in integer given by user. 
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CountEvenDigits.
//  Input :         Integer.
//  Output :        Integer.
//  Description :   checks the count of even digits in given number.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int CountEvenDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)      //  Updater
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
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
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue1);

    iRet = CountEvenDigits(iValue1);

    printf("%d even digits are there in %d.\n", iRet, iValue1);

    return 0;
}