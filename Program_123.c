// Take string as a input from user, copy that string into another string.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strcpyX.
//  Input         : Pointer, pointer
//  Output        : void
//  Description   : Copy first string int another string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void strcpyX(char * str, char * dest)
{
    while(* str != '\0')
    {
        * dest = * str;
        str++;
        dest++;
    }

    * dest = '\0';
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr, Brr);

    printf("String After copy : %s.\n", Brr);

    return 0;
}