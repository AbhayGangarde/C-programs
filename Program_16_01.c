//  Take single number as a input from user, give factorial of that number.
#include <stdio.h>

// void DisplayF(int iNo)
// {
//     int iCnt = 0;
//     //      1           2        3
//     for(iCnt = 1; iCnt <= iNo; iCnt++)
//     {
//         printf("%d \t", iCnt);      //  4
//     }
// }

// void DisplayB(int iNo)
// {
//     int iCnt = 0;
//     //      1           2        3
//     for(iCnt = iNo; iCnt >= 1; iCnt--)
//     {
//         printf("%d \t", iCnt);      //  4
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

    // for(iCnt = 1; iCnt <= iNo; iCnt++)
    // {
    //     iResult = iResult * iCnt;
    // }

    if(iNo < 0)     //Updater
    {
        iNo = -(iNo);
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iResult = iResult * iCnt;
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

    printf("%d is the factorial of %ld.", iRet, iValue);

    return 0;

}

//  Time Complexity : 
//  O(N) : where N is iNo.
