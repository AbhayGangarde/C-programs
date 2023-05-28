/*
    Input   : 5
    Output  : 1   2   3   4   5   4   3   2   1   
*/

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Display.
//  Input :         Integer1
//  Output :        void
//  Description :   print pattern on the screen.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          14/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)     //  Updater
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    for (iCnt = (iNo - 1); iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d", &iFrequency);

    Display(iFrequency);

    return 0;
}