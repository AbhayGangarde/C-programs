// Take string as a input from user, copy upper case letter from string into another string.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strcpyReverseX.
//  Input         : Pointer, pointer
//  Output        : void
//  Description   : Copy letters from string into another string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void strcpyReverseX(char * str, char * dest)
{
    int iLength = 0;

    while(* str != '\0')
    {
        iLength++;
        str++;
    }

    // while(iLength != 0)
    // {
    //     str--;
    //     * dest = * str;
    //     dest++;
    //     iLength --;
    // }

    for(iLength; iLength != 0 ; iLength--)
    {
        str--;
        * dest = * str;
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

    strcpyReverseX(Arr, Brr);

    printf("String After copy : %s.\n", Brr);

    return 0;
}