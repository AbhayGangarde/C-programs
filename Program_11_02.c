//take input from user as a single integer.pass that number to a function which will return factors of that number.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactors.
//  Input :         Integer.
//  Output :        void.
//  Description :   Displays factorial's of given number.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          02/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)      // O(N)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d is a factorial of %d.\n", iCnt, iNo);
        }
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}

// Time Complexity : O(N)
// Where N is a input (Natural Number)