// Accept string from user and count number of digits in it.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strLenDigitX.
//  Input         : Pointer
//  Output        : Integer
//  Description   : Counts digits in string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

int strLenDigitX(char * str)
{
    int iCount = 0;

    while(* str != '\0')
    {
        if((* str >= '0') && (* str <= '9'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strLenDigitX(Arr);

    printf("Number of digits in \'%s\' is : %d.", Arr, iRet);

    return 0;
}