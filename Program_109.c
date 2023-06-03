// Accept string from user and count number of 'z' in it.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar.
//  Input         : Pointer
//  Output        : Integer
//  Description   : Count 'z' letter in string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

int CountChar(char * str)
{
    int iCount = 0;

    while(* str != '\0')
    {
        if(* str == 'z')
        {
            iCount++;
        }
        str++;
    }
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

    iRet = CountChar(Arr);

    printf("Number of 'z' letter in \'%s\' is : %d.", Arr, iRet);

    return 0;
}