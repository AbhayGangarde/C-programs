//  take input from user as a intger, print seperate digits from that number
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigits.
//  Input :         Integer.
//  Output :        Void.
//  Description :   Displays the Digits From Integer.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          03/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)      //while(iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d\t", iDigit);

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