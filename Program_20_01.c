#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigits.
//  Input :         Integer.
//  Output :        void.
//  Description :   Displays the single Digits From Integer.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);
    return 0;
}