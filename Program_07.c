//Accept number from user check whether Number is divisible by 3 and 5.
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisible
//  Input :         integer
//  Output :        Boolean
//  Description :   Check Whether number is Divisible by 3 and 5
//  Author :        Abhay Indrakumar Gangarde
//  Date :          25/04/2023
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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
    int iValue = 0;                     // variable to accept input
    bool bRet = false;                  // Variable to accept Boolean

    printf("Please enter a number you want to check divisibility for by 3 and 5 :\n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);      // Function Call

    if(bRet == true)
    {
        printf("%d is Completely Divisible by 3 and 5.\n", iValue);
    }
    else
    {
        printf("%d is not completely Divisible by 3 and 5.\n\n", iValue);
    }

    return 0;
}

/*
        Logical Operators

        1 : Logical AND     &&
        2 : Logical OR     ||

        Expression 1    Expression 1     &&      ||
           0(false)       0(false)       0       0
           0(false)       1(true)        0       1
           1(true)        0(false)       0       1
           1(true)        1(true)        1       1

*/