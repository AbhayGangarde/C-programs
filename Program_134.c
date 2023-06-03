// take string as a input from user and reverse that string.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function_Name : strRevX.
//  Input         : Pointer, pointer
//  Output        : bool
//  Description   : reverse given string .
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 23/05/2023.
//  Update_Date   : 
//
///////////////////////////////////////////////////////////////////

void strRevX(char * str)
{
    char * start = NULL;
    char * end = NULL;

    char Temp = '\0';

    start = str;
    end = str;

    while(* end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        Temp = * start;
        * start = * end;
        * end = Temp;

        start++;
        end--;
    }
}
///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s", Arr);

    strRevX(Arr);

    printf("String after reverse : %s.", Arr);

    return 0;
}