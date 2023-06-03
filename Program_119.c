// Take string as a input from user, replace Capital letters with corrsponding small letters.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrX.
//  Input         : Pointer
//  Output        : void
//  Description   : replace capital letters in string with corresponding small letters.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void strlwrX(char * str)
{
    while(* str != '\0')
    {
        if((* str >= 'A') && (* str <= 'Z'))
        {
            * str = * str + 32;
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

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("String after editing : %s.\n", Arr);

    return 0;
}