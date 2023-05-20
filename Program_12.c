//take input from user as a single integer.pass that number to a function which will return the sum of factors of that number.
#include <stdio.h>

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
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iResult = SumOfFactors(iValue);

    printf("The sum of factorials of given number is : %d.\n", iResult);

    return 0;
}

// Time Complexity : O(N / 2)
// O(N/2)   == Order(N number/ 2)
// Where N is a input (Natural Number)
