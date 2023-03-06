#include<stdio.h>

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};
    
    int *ptr1 = &Arr[1];
    int *ptr2 = &Arr[3];
    
    printf("The adress of first index is : %d.\n",(ptr1));
    printf("The adress of third index is : %d.\n",(ptr2));
    
    printf("%d\n",(ptr1 + 2));
    printf("%d\n",(ptr2 - 2));
    printf("%d\n",(ptr2 - ptr1));

    return 0;
}