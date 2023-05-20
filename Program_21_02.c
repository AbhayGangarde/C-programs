//  Check if given integer contains 8 as a digit or not. 
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDigits.
//  Input :         Integer.
//  Output :        bool.
//  Description :   checks Digit's if it is equal's to 8.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

bool CheckDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            break;
        }
        iNo = iNo / 10;
    }

    if(iDigit == 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    bRet = CheckDigits(iValue);

    if(bRet == true)
    {
        printf("Digit 8 is present in %d.\n", iValue);
    }
    else
    {
        printf("Digit 8 is not present in %d.\n", iValue);
    }

    return 0;
}