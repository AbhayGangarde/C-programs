
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDigit.
//  Input         : character
//  Output        : bool
//  Description   : checks whether character is digit or not.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

bool CheckDigit(char cValue)
{
    if((cValue >= '0') && (cValue <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Ch = '\0';
    bool bRet = false;

    printf("Enter Character : \n");
    scanf("%c", &Ch);

    bRet = CheckDigit(Ch);

    if(bRet == true)
    {
        printf("%c is a digit.\n", Ch);
    }
    else
    {
        printf("%c is not a digit.\n", Ch);
    }

    return 0;
}