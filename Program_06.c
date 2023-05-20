//Write a program which Accept number from user and check's whether that number is even or odd.

#include <stdio.h>              // For printf and scanf
#include <stdbool.h>            // For bool data type

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOrOdd
//  Input :         integer
//  Output :        Boolean
//  Description :   Check Whether number is Even or not
//  Author :        Abhay Indrakumar Gangarde
//  Date :          25/04/2023
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

bool CheckEvenOrOdd(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;                     // Variable to Accept input
    bool bRet = false;                  // Variable to accept the return value

    printf("Please enter a number to check whether it is even or odd :\n");
    scanf("%d", &iValue);

    bRet = CheckEvenOrOdd(iValue);      // Function Call

    if(bRet == true)
    {
        printf("%d is Even number.\n", iValue);
    }
    else
    {
        printf("%d is Odd number.\n", iValue);
    }

    return 0;
}