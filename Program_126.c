// Take string as a input from user, copy letter from string into another string and toggle their case.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strcpyAndToggleX.
//  Input         : Pointer, pointer
//  Output        : void
//  Description   : Copy letters from string into another string and toggle the case.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void strcpyAndToggleX(char * str, char * dest)
{
    while(* str != '\0')
    {
        int GAP = 'a' - 'A';

        if((* str >= 'A') && (* str <='Z'))
        {
            * dest = (* str + GAP);
        }
        else if((* str >= 'a') && (* str <= 'z'))
        {
            * dest = (* str - GAP);
        }
        else
        {
            * dest = * str;
        }
        dest++;
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

    strcpyAndToggleX(Arr, Brr);

    printf("String After copy : %s.\n", Brr);

    return 0;
}