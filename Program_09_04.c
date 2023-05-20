//  Take input from user as a integer, display 'Jay Ganesh...' number of times.

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Display.
//  Input :         Integer.
//  Output :        void.
//  Description :   Displays 'Jay Ganesh' N times.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          26/04/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the frequency of Jay Ganesh statement : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}