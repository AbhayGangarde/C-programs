#include<stdio.h>

int main()
{
    register int iCnt = 0;
    int No1 = 0;

    printf("How many times you want to print \" Jay Ganesh...\" \n");
    scanf("%d",&No1);

    for(iCnt=1;iCnt<= No1; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }

    return 0;
}