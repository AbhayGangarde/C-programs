//  Check if given integer contains the digits given by user in it or not. 
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDigit.
//  Input :         Integer, Integer.
//  Output :        bool.
//  Description :   checks if iSearch is present in given number.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

bool CheckDigit(int iNo, int iSearch)
{
    int iDigit = 0;
    bool bFlag = false;

    if((iSearch >= 10) || (iSearch < 0))    //   filter      
    {
        printf("please enter digits between 0 to 9.\n");
        return false;
    }

    if(iNo < 0)      //  Updater
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            break;
        }
        iNo = iNo / 10;
    }

    if(iDigit == iSearch)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d", &iValue1);

    printf("Enter a digit (0 to 9) :\n");
    scanf("%d", &iValue2);

    bRet = CheckDigit(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d is present in %d", iValue2, iValue1);
    }
    else
    {
        printf("%d is not present in %d", iValue2, iValue1);
    }

    return 0;
}