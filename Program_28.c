//  Check number is pallindrome number or not given by user. 
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPallindrome.
//  Input :         Integer.
//  Output :        Bool.
//  Description :   Checks whether given number is pallindrome or not.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

bool CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iReverse = (iReverse * 10) + iDigit; 
        iNo = iNo / 10;
    }

    if(iReverse == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is a pallindrome number.\n", iValue);
    }
    else
    {
        printf("%d is not a pallindrome number.\n", iValue);
    }

    return 0;
}