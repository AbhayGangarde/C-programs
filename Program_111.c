// Accept string from user and check whether it contains 'z' in it.
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLetter.
//  Input         : Pointer
//  Output        : bool
//  Description   : checks if 'z' present in string or not.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

bool CheckLetter(char * str)
{
    while(* str != '\0')
    {
        if(* str == 'z')
        {
            break;
        }
        str++;
    }
    if(* str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckLetter(Arr);

    if(bRet == true)
    {
        printf("z is present in \'%s\'", Arr);
    }
    else
    {
        printf("z is not present in \'%s\'", Arr);
    }

    return 0;
}