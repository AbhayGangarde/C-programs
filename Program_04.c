/*
Steps to write / create application :

step 1 : Understand the problem statement
step 2 : Write the algorithm
step 3 : Decide the programming language
step 4 : Write the program
step 5 : Test the Written program
*/

// Step 1 : Accept two numbers from user and add them and return it's value.

/*
    Srep 2 : Alogrithm :

    START
        1. Accept First number as No1
        2. Accept First number as No2
        3. Create one variable as Ans
        4. Perform addition of No1 and No2
        5. Store Addition into variable Ans
        6. Display the value of Ans
    STOP

*/

//Step 3 : Decide programming Language : C programming.

//Step 4 : Write the program

//////////////////////////////////////////////////////////////////////
//
//Problem Statement : Accept two numbers from user and add them and return it's value.
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>              //Header Inclusion statement.

///////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input :         Unsigned integer, unsigned integer
//  Output :        Unsigned integer
//  Description :   Performs addition of 2 numbers
//  Author :        Abhay Indrakumar Gangarde
//  Date :          18/04/2023  + 19/04/2023
//
///////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;

    iResult = iValue1 + iValue2;

    return iResult;
}

////////////////////////////////////////////////////////////////
//Entry point function.  
////////////////////////////////////////////////////////////////

int main()                      
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d", &iNo1);

    printf("Enter second number : \n");
    scanf("%d", &iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Addition is : %d.\n", iAns);

    return 0;
}