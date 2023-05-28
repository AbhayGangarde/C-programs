/*
    Input   :
            Row : 3
            Col : 5

    Output  :
            1   2   3   4   5
            1   2   3   4   5
            1   2   3   4   5
*/

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Display.
//  Input         : Integer1, Integer2
//  Output        : Void
//  Description   : print pattern on the screen.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 15/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void Display(int iRow, int iCloumn)
{
    int iCnt = 0;
    int jCnt = 0;

    if(iRow < 0)     //  Updater
    {
        iRow = -(iRow);
    }
    if(iCloumn < 0)
    {
        iCloumn = -(iCloumn);
    }
    //      1           2           3
    for(iCnt = 1; iCnt <= iRow; iCnt++)             //  Outer Loop
    {//         1            2           3
        for(jCnt = 1; jCnt <= iCloumn; jCnt++)      //  Inner Loop
        {
            printf("%d\t",jCnt);     //  4
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