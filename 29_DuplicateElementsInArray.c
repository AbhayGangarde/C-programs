/*Write a program in C to count a total number of duplicate elements in an array.*/
#include <stdio.h>

int main()
{
    int Arr[10];
    int No = 0;
    int iCnt = 0;
    int jCnt = 0;
    int kCnt = 0;
    int lCnt = 0;
    int Count = 0;

    printf("Enter how many numbers you want to enter :\n");
    scanf("%d", &No);

    for (iCnt = 1; iCnt <= No; iCnt++)
    {
        printf("Element number %d :\n", iCnt);
        scanf("%d", &Arr[iCnt - 1]);
    }

    printf("\n");

    for (kCnt = 1; kCnt <= No; kCnt++)
    {
        printf("%d ", Arr[kCnt - 1]);
    }

    // 4
    //  0,1,2,3
    //[2,4,2,8]
    for (jCnt = 0; jCnt < No; jCnt++)
    {
        for (lCnt = 0; lCnt < No; lCnt++)
        {
            if (jCnt != lCnt && Arr[jCnt] == Arr[lCnt])
            {
                Count += 1;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in the array is : %d.\n", (Count / 2));

    return 0;
}