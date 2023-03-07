#include<stdio.h>

struct Demo                             //Structure declaration
{
    int I;
    float F;
};

int main()
{
    struct Demo Arr[4];

    Arr[0].I = 11;
    Arr[0].F = 90.0;

    Arr[1].I = 21;
    Arr[1].F = 95.0;
    
    Arr[2].I = 31;
    Arr[2].F = 97.0;
    
    Arr[3].I = 41;
    Arr[3].F = 99.0;

    printf("%d.\n",Arr[0].I);
    printf("%f.\n",Arr[0].F);

    printf("%d.\n",Arr[1].I);
    printf("%f.\n",Arr[1].F);

    printf("%d.\n",Arr[2].I);
    printf("%f.\n",Arr[2].F);

    printf("%d.\n",Arr[3].I);
    printf("%f.\n",Arr[3].F);
    
    printf("%d.\n",Arr[4].I);
    printf("%f.\n",Arr[4].F);
    
    return 0;
}