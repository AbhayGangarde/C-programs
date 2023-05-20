//  Check count of given digit in integer given by user. 
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckCount.
//  Input :         Integer, Integer.
//  Output :        Integer.
//  Description :   checks the count of iSearch in given number.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int CheckCount(int iNo, int iSearch)
{
    int iDigit = 0;
    int iCount = 0;

    if((iSearch >= 10) || (iSearch < 0))    //   filter      
    {
        printf("please enter digits between 0 to 9.\n");
        return 0;
    }

    if(iNo < 0)      //  Updater
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue1);

    printf("Enter a digit (0 to 9) :\n");
    scanf("%d", &iValue2);

    iRet = CheckCount(iValue1, iValue2);

    printf("%d is present %d times in %d.\n", iValue2, iRet, iValue1);

    return 0;
}