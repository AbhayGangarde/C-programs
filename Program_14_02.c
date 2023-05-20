//  Accept input from user and check whether that number is prime or not.
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPrime.
//  Input :         Integer.
//  Output :        Boolean.
//  Description :   Check's if given number is prime or not.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          03/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2;iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }

    if(iCnt == ((iNo / 2) + 1))
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

    bResult = CheckPrime(iValue);

    if(bResult == true)
    {
        printf("%d is a prime number.\n", iValue);
    }
    else
    {
        printf("%d is not a prime number.\n", iValue);
    }

    return 0;
}

//  Time Complexity : 
//  O(N / 2) : when your number is prime.
//  X : When your number not prime, where x is your factor
//  O(N/2) == Order(N number/ 2)
//  Where N is a input (Natural Number)
