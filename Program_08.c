//Write a Program to Take Percentage from user and display the class Accordingly.
/*
    0 to 34     : Fail
    35 to 49    : Pass Class
    50 to 59    : Second Class
    60 to 74    : First Class
    75 to 100   : First class with Distinction
*/

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayClass
//  Input :         float
//  Output :        void
//  Description :   Displays the class according to the percentage
//  Author :        Abhay Indrakumar Gangarde
//  Date :          25/04/2023
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

void DisplayClass(float fPercentage)
{
    if(fPercentage < 0.0f || fPercentage > 100.f)        // Filter
    {
        printf("Invalid Input.\n");
        printf("PLease Enter the Percentage in between the range 0 to 100.\n");
        return;
    }

    if((fPercentage >= 0.0f) && (fPercentage < 35.0f))
    {
        printf("You are fail.\n");
    }
    else if((fPercentage >= 35.0f) && (fPercentage < 50.0f))
    {
        printf("You got pass class.\n");
    }
    else if((fPercentage >= 50.0f) && (fPercentage < 60.0f))
    {
        printf("You got second class.\n");
    }
    else if((fPercentage >= 60.0f) && (fPercentage < 75.0f))
    {
        printf("You got first class.\n");
    }
    else if((fPercentage >= 75.0f) && (fPercentage <= 100.0f))
    {
        printf("Congratulations..!!!\nYou got first class with distinction.\n");
    }

}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;

    printf("Please Enter your Percentage :\n");
    scanf("%f", &fValue);

    DisplayClass(fValue);       // Function Call

    return 0;
}