#include<stdio.h>

struct Demo                             //Structure declaration
{
    int I;
    float F;
    int Arr[4];
};

int main()
{
    struct Demo Obj;

    struct Demo * ptr = &Obj;

    Obj.I = 10;
    Obj.F = 90.88;
    
    Obj.Arr[0] = 11;
    Obj.Arr[1] = 21;
    Obj.Arr[2] = 31;
    Obj.Arr[3] = 41;


    return 0;
}