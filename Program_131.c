// Take string as a input from user, concat that string to another string.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strNcpyX.
//  Input         : Pointer, pointer
//  Output        : void
//  Description   : Copy string into another string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void strNcpyX(char * str, char * dest, int iNo)
{
    while((* str != '\0') && (iNo != 0))
    {
        * dest = * str;
        dest++;
        str++;
        iNo--;
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
    int iValue = 0;

    printf("Enter first String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter how many letters you want to copy : \n");
    scanf("%d", &iValue);

    strNcpyX(Arr, Brr, iValue);

    printf("String After copy : %s.\n", Brr);

    return 0;
}