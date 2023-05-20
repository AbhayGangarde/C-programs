
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigits.
//  Input :         Integer.
//  Output :        void.
//  Description :   Displays the single Digits From Integer using for loop.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    for( ;iNo != 0; iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
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