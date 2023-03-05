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

    printf("1.Addition \t 2.Substraction \t 3.Multiplication \t 4.Division\n");
    printf("Enter The number of operation you wanted to do : \n");
    scanf("%d",&Opr);

    switch (Opr)
    {
    case 1:
        printf("You have choosen Addition.\n");
        printf("Enter the First Number :\n");
        scanf("%d",&No1);

        printf("Enter the second Number :\n");
        scanf("%d",&No2);

        Result = Addition(No1, No2);

        printf("The addition of %d and %d is %d.\n",No1, No2,Result);
        
        break;
    
    case 2:
        printf("You have choosen Substraction.\n");
        printf("Enter the First Number :\n");
        scanf("%d",&No1);

        printf("Enter the second Number :\n");
        scanf("%d",&No2);

        Result = Substraction(No1, No2);
        
        printf("The Substraction of %d and %d is %d.\n",No1, No2,Result);
        
        break;

    case 3:
        printf("You have choosen Multiplication.\n");
        printf("Enter the First Number :\n");
        scanf("%d",&No1);

        printf("Enter the second Number :\n");
        scanf("%d",&No2);

        Result = Multiplication(No1, No2);
        
        printf("The Multiplication of %d and %d is %d.\n",No1, No2,Result);

        break;

    case 4:
        printf("You have choosen Division.\n");
        printf("Enter the First Number :\n");
        scanf("%d",&No1);

        printf("Enter the second Number :\n");
        scanf("%d",&No2);

        Result = Division(No1, No2);

        printf("The Division of %d and %d is %d.\n",No1, No2,Result);

        break;        

    default:
        printf("Invalid Number...\n");
        break;
    }

    return 0;
}