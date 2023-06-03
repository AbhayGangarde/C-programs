// Take string and replace whitespaces with _(underscore).
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency.
//  Input         : Pointer
//  Output        : void
//  Description   : Replace white spaces with '_' in string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void EditString(char * str)
{
    while(* str != '\0')
    {
        if(* str == ' ')
        {
            * str = '_';
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

    printf("String after editing is : %s.\n", Arr);

    return 0;
}