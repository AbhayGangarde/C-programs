// Accept number from user, check whether it is perfect or not.
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : SumOfFactors.
//  Input :         Integer.
//  Output :        Integer.
//  Description :   Returns sum of factorial's of given number.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          02/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int SumOfFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     //  Updater
    {
        iNo = (-iNo);
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)      // O(N / 2)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

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
    int iResult = 0;

    iResult = SumOfFactors(iNumber);

    if(iResult == iNumber)
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