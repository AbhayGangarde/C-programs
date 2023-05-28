/*
    Input   :
            Row : 4
            Col : 4

    Output  :
            A
            A   B
            A   B   C
            A   B   C   D
*/

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Display.
//  Input         : Integer1, Integer2
//  Output        : Void
//  Description   : print pattern on the screen.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 16/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void Display(int iRow, int iCloumn)
{
    int iCnt = 0;
    int jCnt = 0;
    char ch = '\0';

    //      1           2           3
    for(iCnt = 1; iCnt <= iRow; iCnt++)             //  Outer Loop
    {//         1            2           3
        for(jCnt = 1, ch = 'A'; jCnt <= iCnt; jCnt++, ch++)      //  Inner Loop
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter the frequency of columns : \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}