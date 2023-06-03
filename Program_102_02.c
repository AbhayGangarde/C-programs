#include <stdio.h>

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[40];

    printf("Enter your name : \n");
    scanf("%[^'\n']s", Arr);            //  Regex(Regular Expression)

    printf("Your name is : %s.\n", Arr);

    return 0;
}