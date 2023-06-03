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

void strNcatX(char * str, char * dest, int iNo)
{
    while(* dest != '\0')
    {
        * dest++;
    }

    * dest = ' ';
    dest++;

    while(* str != '\0')
    {
        * dest = * str;
        dest++;
        str++;
        iNo--;
        if(iNo == 0)
        {
            break;
        }
    }

    * dest = '\0';
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iValue = 0;

    printf("Enter first String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter how many letters you want to copy : \n");
    scanf("%d", &iValue);

    strNcatX(Arr, Brr, iValue);

    printf("String After copy : %s.\n", Brr);

    return 0;
}