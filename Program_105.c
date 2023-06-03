// Accept string from user and number of capital characters.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strLenCapitalX.
//  Input         : Pointer
//  Output        : Integer
//  Description   : Counts capital letters in string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

int strLenCapitalX(char * str)
{
    int iCount = 0;

    while(* str != '\0')
    {
        if((* str >= 'A') && (* str <= 'Z'))
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

    iRet = strLenCapitalX(Arr);

    printf("Number of capital letters in \'%s\' is : %d.", Arr, iRet);

    return 0;
}