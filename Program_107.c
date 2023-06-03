// Accept string from user and count number of vowels in it.
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CountVowels.
//  Input         : Pointer
//  Output        : Integer
//  Description   : Counts vowels in string.
//  Author        : Abhay Indrakumar Gangarde.
//  Date          : 21/05/2023.
//  Update Date   :    
//
///////////////////////////////////////////////////////////////////

int CountVowels(char * str)
{
    int iCount = 0;

    while(* str != '\0')
    {
        if((* str == 'a') || (* str == 'A'))
        {
            iCount++;
        }
        else if((* str == 'e') || (* str == 'E'))
        {
            iCount++;
        }
        else if((* str == 'i') || (* str == 'I'))
        {
            iCount++;
        }
        else if((* str == 'o') || (* str == 'O'))
        {
            iCount++;
        }
        else if((* str == 'u') || (* str == 'U'))
        {
            iCount++;
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
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);

    printf("Number of vowels in \'%s\' is : %d.", Arr, iRet);

    return 0;
}