/*Write a program in C to print all unique elements in an array.*/
#include <stdio.h>

int main()
{
    int Arr[1];
    auto int No ;
    auto int k = 0;
    auto int Count = 0;
    register int iCnt = 0;
    register int jCnt = 0;
    register int kCnt = 0;
    register int lCnt = 0;

    printf("Enter a number of elements you want in an array :\n");
    scanf("%d", &No);

    for (iCnt = 0; iCnt < No; iCnt++)
    {
        printf("Enter element number %d :\n", (iCnt + 1));
        scanf("%d", &Arr[iCnt]);
    }

    printf("Array entered is :\n");

    for (jCnt = 0; jCnt < No; jCnt++)
    {
        printf("%d ", Arr[jCnt]);
    }

    printf("\nThe unique elements found in the array are: \n");

    for (kCnt = 0; kCnt < No; kCnt++)
    {
        Count = 0;

        for (lCnt = 0 ; lCnt < No ; lCnt++)
        {
            if (kCnt != lCnt)
            {
                if (Arr[kCnt] == Arr[lCnt])
                {
                    Count++;
                    // if(Count > 0)
                    // {
                    //     break;
                    // }
                }
            }
        }

        if (Count == 0)
        {
            printf("%d ", Arr[kCnt]);
        }
    }

    return 0;
}