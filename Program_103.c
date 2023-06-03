// Accepts string and count letters.
#include <stdio.h>
// #include<string.h>       //  To get inbuild methods for string

///////////////////////////////////////////////////////////////////
//
//  Function Name : strLenX.
//  Input         : Pointer
//  Output        : Integer
//  Description   : Counts length of string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

// int strLenX(char str[])
int strLenX(char * str)
{
    int iCount = 0;

    while(* str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}
///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);            //  Regex(Regular Expression)

    // iRet = strlen(Arr);      //  inbuild in <string.h> header file
    iRet = strLenX(Arr);

    printf("Length of string is : %d.\n", iRet);

    return 0;
}