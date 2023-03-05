#include<stdio.h>

int Addition(int A, int B)
{
    int Result = 0;
    Result = A + B;
    return Result;
}

int Substraction(int A, int B)
{
    int Result = 0;
    Result = A - B;
    return Result;
}

int Multiplication(int A, int B)
{
    int Result = 0;
    Result = A * B;
    return Result;
}

int Division(int A, int B)
{
    int Result = 0;
    Result = A / B;
    return Result;
}

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Opr = 0;
    int Result = 0;

    printf("Which Operation you want operate;\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nplease enter number:\n\n");
    scanf("%d",&Opr);

    if(Opr == 1)
    {
        printf("You have choosen Addition:\n\n");
        
        printf("Enter first number :\n");
        scanf("%d",&No1);
        printf("Enter Second number :\n");
        scanf("%d",&No2);

        Result = Addition(No1, No2);
        printf("The Addition of %d and %d is %d.",No1, No2, Result);
    }
    else if(Opr == 2)
    {
        printf("You have choosen Substraction:\n\n");
        
        printf("Enter first number :\n");
        scanf("%d",&No1);
        printf("Enter Second number :\n");
        scanf("%d",&No2);

        Result = Substraction(No1, No2);
        printf("The Substraction of %d and %d is %d.",No1, No2, Result);
    }
    else if(Opr == 3)
    {
        printf("You have choosen Multiplication:\n\n");

        printf("Enter first number :\n");
        scanf("%d",&No1);
        printf("Enter Second number :\n");
        scanf("%d",&No2);

        Result = Multiplication(No1, No2);
        printf("The Multiplication of %d and %d is %d.",No1, No2, Result);
    }
    else if(Opr == 4)
    {
        printf("You have choosen Division:\n\n");

        printf("Enter first number :\n");
        scanf("%d",&No1);
        printf("Enter Second number :\n");
        scanf("%d",&No2);
        
        Result = Division(No1, No2);
        printf("The Division of %d and %d is %d.",No1, No2, Result);
    }
    else
    {
        printf("Invalid Number Entered.\n");
    }
    return 0;
}