#include <stdio.h>

int main()
{
    int Roll = 0;

    printf("Enter your Roll number :\n");
    scanf("%d", &Roll);

    char Arr[5][9] = {"Abhay", "Rushikesh", "Shubham", "Om"};

    switch (Roll)
    {
    case 1:
        printf("Name of Student is : %s\n", Arr[0]);
        break;
    case 2:
        printf("Name of Student is : %s\n", Arr[1]);
        break;
    case 3:
        printf("Name of Student is : %s\n", Arr[2]);
        break;
    case 4:
        printf("Name of Student is : %s\n", Arr[3]);
        break;
    default:
        printf("Invalid Roll number.\n");
    }

    return 0;
}