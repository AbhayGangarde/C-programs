//  display 1 to 5 number on console.

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Display.
//  Input :         void.
//  Output :        void.
//  Description :   Displays 1 to 5 numbers.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          26/04/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}