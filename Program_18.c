//  take input from user as a intger, count digits from that number
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CountDigits.
//  Input :         Integer.
//  Output :        Integer.
//  Description :   Returns the count of Digits From Integer.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          03/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo > 0)      //while(iNo != 0)
    {
        iCnt++;

        iNo = iNo / 10;
    }

    return iCnt;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("%d are the count of digits from %d.\n", iRet, iValue);

    return 0;
}