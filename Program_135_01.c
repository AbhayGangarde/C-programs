// take string as a input from user and reverse that string.
#include <stdio.h>
#include<stdbool.h>

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

bool CheckPallindrome(char * str)
{
    char * start = NULL;
    char * end = NULL;
    bool bFlag = true;

    start = str;
    end = str;

    while(* end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        if(* start != * end)
        {
            bFlag = false;
            break;
        }
        start++;
        end--;
    }

    return bFlag;
}
///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter a string : \n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckPallindrome(Arr);

    if(bRet == true)
    {
        printf("%s is a pallindrome string.\n", Arr);
    }
    else
    {
        printf("%s is a not pallindrome string.\n", Arr);
    }

    return 0;
}