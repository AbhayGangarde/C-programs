// Take string and character as a input from user, find last occurance of character in string.
#include <stdio.h>
#define ERR_NOTFOUND -1

///////////////////////////////////////////////////////////////////
//
//  Function Name : LastOccurance.
//  Input         : Pointer, character
//  Output        : Integer
//  Description   : finds last occurance of given character in screen.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 22/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

int LastOccurance(char * str, char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while(* str != '\0')
    {
        if(* str == cValue)
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
    }

    return iPos;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c", &ch);

    iRet = LastOccurance(Arr, ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character.\n");
    }
    else
    {
        printf("%c is present at %d position in \'%s\'.\n", ch, iRet, Arr);
    }

    return 0;
}