
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckSmall.
//  Input         : character
//  Output        : bool
//  Description   : checks whether character is small or not.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

bool CheckSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
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

    bRet = CheckSmall(Ch);

    if(bRet == true)
    {
        printf("%c is a small letter.\n", Ch);
    }
    else
    {
        printf("%c is not a small character.\n", Ch);
    }

    return 0;
}