
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckCapital.
//  Input         : Character
//  Output        : bool
//  Description   : Checks whether character is capital or not.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

bool CheckCapital(char Ch)
{
    if((Ch >= 'A') && (Ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
    // if((Ch >= 65) && (Ch <= 90))
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
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

    bRet = CheckCapital(Ch);

    if(bRet == true)
    {
        printf("%c is a capital letter.\n", Ch);
    }
    else
    {
        printf("%c is not a capital character.\n", Ch);
    }

    return 0;
}