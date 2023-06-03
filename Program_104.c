// Accept string from user and count the number of small characters in it.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strLenSmall.
//  Input         : Pointer
//  Output        : Integer
//  Description   : Counts Small letters in string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

int strLenSmall(char * str)
{
    int iCount = 0;

    while(* str != '\0')
    {
        if((* str >= 'a') && (* str <= 'z'))
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

    iRet = strLenSmall(Arr);

    printf("Number of small letters in \'%s\' is : %d.", Arr, iRet);

    return 0;
}