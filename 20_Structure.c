#include<stdio.h>

struct Demo
{
    char Ch;
    int J; 
    int I;
    float F;
    double D;
};

int main()
{
    struct Demo obj1;

    printf("Size of Obj1 is : %d.\n",sizeof(obj1));

    // struct Demo obj2;

    // obj1.I = 11;
    // obj1.F = 90.9;
    // obj1.J = 21;

    // obj2.I = 51;
    // obj2.F = 78.78;
    // obj2.J = 99;
    // printf("%d.\n",obj1.I);
    // printf("%d.\n",obj2.I);

    return 0;
}