// Take string and character as a input from user, find out count of Capital letter and small letters.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency.
//  Input         : Pointer
//  Output        : void
//  Description   : prints count of capital and small letters on screen.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

void Frequency(char * str)
{
    int iCapitalCount = 0;
    int iSmallCount = 0;

    while(* str != '\0')
    {
        if((* str >= 'a') && (* str <= 'z'))
        {
            iSmallCount++;
        }
        else if((* str >= 'A') && (* str <= 'Z'))
        {
            iCapitalCount++;
        }
        str++;
    }

    printf("Capital letters are : %d.\n", iCapitalCount);
    printf("Small letters are : %d.\n", iSmallCount);
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Frequency(Arr);

    return 0;
}