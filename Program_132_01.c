// Take two strings as a input from user and check whether both strings are same or not.
#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : strcmpX.
//  Input         : Pointer, pointer
//  Output        : bool
//  Description   : compare two string .
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 23/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

bool strcmpX(char * str1, char * str2)
{
    while((* str1 != '\0') && (* str2 != '\0'))
    {
        if(* str1 != * str2)
        {
            break;
        }
        str1++;
        str2++;
    }

    // if((* str1 == '\0') && (* str2 == '\0'))
    if(* str1 == * str2)
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
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter first String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Second String : \n");
    scanf(" %[^'\n']s",Brr);

    bRet = strcmpX(Arr, Brr);

    if(bRet == true)
    {
        printf("\'%s\' and \'%s\' both are same.\n",Arr, Brr);
    }
    else
    {
        printf("\'%s\' and \'%s\' both are not same.\n",Arr, Brr);
    }

    return 0;
}