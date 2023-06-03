// Take string as a input from user, replace Capital letters with corrsponding small letters.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : struprX.
//  Input         : Pointer
//  Output        : void
//  Description   : replace small letters in string with corresponding capital letters.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void struprX(char * str)
{
    int GAP = 'A' - 'a';

    while(* str != '\0')
    {
        if((* str >= 'a') && (* str <= 'z'))
        {
            * str = * str - GAP;
        }
        else if(* str >= 'A' && ( * str) <= 'Z')
        {
            * str = * str + GAP;
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

    struprX(Arr);

    printf("String after editing : %s.\n", Arr);

    return 0;
}