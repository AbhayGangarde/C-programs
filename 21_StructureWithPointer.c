#include<stdio.h>

struct Demo                             //Structure declaration
{
    int I;
    float F;
    int J; 
};

int main()
{
    struct Demo obj1 = {11,90.90,51};   // member initialization list

    struct Demo * ptr = &obj1;

    obj1.I = 11;                        // . Direct member access operator
    ptr -> J = 51;                      // -> Indirect member access operator 
    ptr -> F = 90.90;

    printf("%f.\n",ptr -> F);
    printf("%d.\n",ptr -> I);
    printf("%d.\n",ptr -> J);

    return 0;
}