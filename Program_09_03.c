//Display "Jay Ganesh" 5 times on the console

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Display.
//  Input :         void.
//  Output :        void.
//  Description :   Displays 'Jay Ganesh' 5 times.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          26/04/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= 5; iCnt++)
    {
        printf("Jay Ganesh...\n");
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