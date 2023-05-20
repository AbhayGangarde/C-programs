//  Take input from user as a integer N, display 1 to N number of times.

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Display.
//  Input :         Integer.
//  Output :        void.
//  Description :   Displays 1 to N times.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          26/04/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     //  Filter for negative input.
    {
        printf("Error : Invalid Input.\n");
        printf("Note : Please enter a positive number.\n");

        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}