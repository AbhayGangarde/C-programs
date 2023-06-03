// Accept string and character from user and count the occurance of character in it.
#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar.
//  Input         : Pointer, character
//  Output        : Integer
//  Description   : count occurance of given character in string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

int CountChar(char * str, char cValue)
{
    int iCount = 0;

    while(* str != '\0')
    {
        if(* str == cValue)
        {
            iCount++;;
        }
        str++;
    }
    return iCount;
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
    
    fflush(stdin);

    printf("Enter character : \n");
    scanf("%c",&ch);

    iRet = CountChar(Arr, ch);

    printf("Number of occurances of %c in \'%s\' is : %d.", ch, Arr, iRet);


    return 0;
}