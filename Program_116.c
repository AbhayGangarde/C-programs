// Take string as a input from user, replace Capital letters with *.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : EditString.
//  Input         : Pointer
//  Output        : void
//  Description   : replace capital letters in string with *.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void EditString(char * str)
{
    while(* str != '\0')
    {
        if((* str >= 'A') && (* str <= 'Z'))
        {
            * str = '*';
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

    EditString(Arr);

    printf("String after editing : %s.\n", Arr);

    return 0;
}