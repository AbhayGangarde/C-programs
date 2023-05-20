//  Calculate average of digits of integer given by user. 
#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateAverage.
//  Input :         Integer.
//  Output :        float.
//  Description :   Calculate the average of the digits in the integer.
//  Author :        Abhay Indrakumar Gangarde.
//  Date :          09/05/2023.
//  Update Date :    
//
///////////////////////////////////////////////////////////////////

float CalculateAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }

    fAvg = ((float)iSum / iCount);

        return fAvg;
}

///////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    fRet = CalculateAverage(iValue);

    printf("%0.2f is the average of %d.\n", fRet, iValue);

    return 0;
}