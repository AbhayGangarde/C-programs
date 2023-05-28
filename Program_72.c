/*
    Input   :
            Row : 4
            Col : 4

    Output  :
            1   &   3   &   
            1   &   3   &   
            1   &   3   &   
            1   &   3   &   
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

    //      1           2           3
    for(iCnt = 1; iCnt <= iRow; iCnt++)             //  Outer Loop
    {//         1            2           3
        for(jCnt = 1; jCnt <= iCloumn; jCnt++)      //  Inner Loop
        {
            if(jCnt % 2 == 1)
            {
                printf("%d\t", jCnt);
            }
            else
            {
                printf("&\t");
            }
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