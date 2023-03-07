#include<stdio.h>

struct Demo                             //Structure declaration
{
    int I;
    int J; 
    int * iptr; 
    float * fptr;
};

int main()
{
    struct Demo obj1;
    int No = 90;
    float F = 90.67;

    obj1.I = 11;     
    obj1.J = 21;     
    obj1.iptr = &No;     
    obj1.fptr = &F;

    printf("%d.\n",obj1.I);         //11
    printf("%d.\n",obj1.J);         //21
    printf("%d.\n",*(obj1.iptr));   //90     
    printf("%f.\n",*(obj1.fptr));   //90.67     

    return 0;
}