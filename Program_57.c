/*
    Input : 7
    Output : A  B   C   D   E   F   G

    Input : 3
    Output : A  B   C
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
    char ch = '\0';
    
    if(iNo < 0)     //  Updater
    {
        iNo = -(iNo);
    }

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t", ch);
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