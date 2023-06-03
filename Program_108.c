// Accept string from user and count number of white spaces in it.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhiteSpaces.
//  Input         : Pointer
//  Output        : Integer
//  Description   : Counts white spaces in string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

int CountWhiteSpaces(char * str)
{
    int iCount = 0;

    while(* str != '\0')
    {
        if((* str == ' '))
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

    iRet = CountWhiteSpaces(Arr);

    printf("Number of white spaces in \'%s\' is : %d.", Arr, iRet);

    return 0;
}