/*
    Input   :
            Row : 4
            Col : 4

    Output  :
                        *
                    *   *
                *   *   *
            *   *   *   *
            *   *   *   *
                *   *   *
                    *   *
                        *
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

    if(iRow != iCloumn)
    {
        printf("Invalid input.\n");
        return;
    }

    for(iCnt = 1; iCnt <= iRow + 1; iCnt++)
    {
        for(jCnt = iCloumn; jCnt >= 1; jCnt--)
        {
            if(jCnt > iCnt)
            {
                printf(" \t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
    for(iCnt = iRow; iCnt >= 1; iCnt--)
    {
        for(jCnt = iCloumn; jCnt >= 1; jCnt--)
        {
            if(iCnt > jCnt)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
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