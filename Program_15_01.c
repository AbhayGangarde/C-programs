// Take 2 number as a input from user as iVaue1 and iVaue2, and give answer as X raise to Y.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CalculatePower.
//  Input :         Integer1, Integer2.
//  Output :        Integer.
//  Description :   Return the value of Integer1 raised to Integer2.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          03/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase; 
    }

    return iResult;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter First number : \n");
    scanf("%d", &iValue1);

    printf("Enter Second number : \n");
    scanf("%d", &iValue2);

    iRet = CalculatePower(iValue1, iValue2);

    printf("%d raised to %d is : %d.\n", iValue1, iValue2, iRet);

    return 0;
}

//  Time Complexity : 
//  O(N) : where N is iPower.
