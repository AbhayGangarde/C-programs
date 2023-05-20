//  Take single number as a input from user, give factorial of that number.
#include <stdio.h>

// void DisplayF(int iNo)
// {
//     int iCnt = 1;
    
//     while(iCnt <= iNo)
//     {
//         printf("%d \t", iCnt);
//         iCnt++;
//     }
// }

// void DisplayB(int iNo)
// {
//     int iCnt = iNo;

//     while(iCnt >= 1)
//     {
//         printf("%d\t",iCnt);
//         iCnt--;
//     }
// }

///////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial.
//  Input :         Integer.
//  Output :        Integer.
//  Description :   Return the Factorial of Integer2.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          03/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

typedef unsigned long int ULINT;

ULINT Factorial(int iNo)
{
    int iCnt = 0;
    ULINT iResult = 1;

    if(iNo < 0)     //Updater
    {
        iNo = -(iNo);
    }

    // iCnt = 1;
    // while(iCnt <= iNo)
    // {
    //     iResult = iResult * iCnt;
    //     iCnt++;
    // }

    iCnt = iNo;
    while(iCnt >= 1)
    {
        iResult = iResult * iCnt;
        iCnt--;
    }

    return iResult;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    ULINT iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    // DisplayF(iValue);
    // DisplayB(iValue);

    printf("%d is the factorial of %ld.", iRet, iValue);

    return 0;

}

//  Time Complexity : 
//  O(N) : where N is iNo.
