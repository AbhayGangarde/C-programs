// Take string as a input from user, copy small case letter from string into another string.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strcpySmall.
//  Input         : Pointer, pointer
//  Output        : void
//  Description   : Copy small letters from string int0 another string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void strcpySmall(char * str, char * dest)
{
    while(* str != '\0')
    {
        if((* str >= 'a') && (* str <='z'))
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

    strcpySmall(Arr, Brr);

    printf("String After copy : %s.\n", Brr);

    return 0;
}