// Take string as a input from user, concat that string to another string.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strcatX.
//  Input         : Pointer, pointer
//  Output        : void
//  Description   : Concat two strings.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void strcatX(char * str, char * dest)
{
    //  1 : Travel till end.
    while(* dest != '\0')
    {
        dest++;
    }

    * dest = ' ';
    dest++;

    //  2 : Copy the data from string to another string.
    while(* str != '\0')
    {
        * dest = * str;
        dest++;
        str++;
    }
    //  3 : add '\0' at the end.
    * dest = '\0';
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strcatX(Arr, Brr);

    printf("String After copy : %s.\n", Brr);

    return 0;
}