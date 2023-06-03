// Take string as a input from user, copy upper case letter from string into another string.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strcpyCapital.
//  Input         : Pointer, pointer
//  Output        : void
//  Description   : Copy capital letters from string into another string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void strcpyCapital(char * str, char * dest)
{
    while(* str != '\0')
    {
        if((* str >= 'A') && (* str <='Z'))
        {
            * dest = * str;
            dest++;
        }
        str++;
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

    strcpyCapital(Arr, Brr);

    printf("String After copy : %s.\n", Brr);

    return 0;
}