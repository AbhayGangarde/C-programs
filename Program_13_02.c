// Accept number from user, check whether it is perfect or not.
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPerfect.
//  Input :         Integer.
//  Output :        Boolean.
//  Description :   Check's if given number is perfect or not.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          02/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

bool CheckPerfect(int iNumber)
{
    int iCnt = 0;
    int iSum = 0;
    int iResult = 0;

    if(iNumber < 0)     //  Updater
    {
        iNumber = (-iNumber);
    }

    for(iCnt = 1; iCnt <= (iNumber/2); iCnt++)      // O(N / 2)
    {
        if((iNumber % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        if(iSum > iNumber)
        {
            break;
        }
    }

    if(iSum == iNumber)
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
    bool bResult = false;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    bResult = CheckPerfect(iValue);

    if(bResult == true)
    {
        printf("%d is a perfect number.\n", iValue);
    }
    else
    {
        printf("%d is not a perfect number.\n", iValue);
    }

    return 0;
}
