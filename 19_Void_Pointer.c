#include<stdio.h>

int main()
{
    char Ch = 'A';
    int I = 11;
    float F = 3.14;
    double D = 9.89;
    
    int *iPtr = &I;
    char *cPtr = &Ch;
    float *fPtr = &F;
    double *dPtr = &D;

    void *vPtr = NULL;
    printf("%d\n",&vPtr);

    vPtr = &Ch;
    printf("%c.\n",*(char *)vPtr);

    vPtr = &I;
    printf("%d.\n",*(int *)vPtr);
    
    vPtr = &F;
    printf("%f.\n",*(float *)vPtr);
    
    vPtr = &D;
    printf("%f.\n",*(double *)vPtr);

    printf("%d is address of %d.\n",(iPtr,*iPtr));
    printf("%d is address of %c.\n",(cPtr,*cPtr));
    printf("%d is address of %f.\n",(fPtr,*fPtr));
    printf("%d is address of %f.\n\n",(dPtr,*dPtr));
    
    
    

    return 0;
}