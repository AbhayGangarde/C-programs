#include <stdio.h>

int main()
{
    /*
    Bitwise Operators
    i.   ~  (bitwise NOT)   [Associativity(R --> L)]
    ii.  << (LEFT Shift)    [Associativity(L --> R)]
    iii. >> (RIGHT Shift)   [Associativity(L --> R)]
    iv.  &  (Bitwise AND)   [Associativity(L --> R)]
    v.   ^  (Bitwise X-OR)  [Associativity(L --> R)]
    vi.  |  (Bitwise OR)    [Associativity(L --> R)]
    */

    auto int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
    int F = 0;
    int G = 0;
    int H = 0;

    printf("Enter first number :\n");
    scanf("%d", &A);
    printf("Enter second number :\n");
    scanf("%d", &B);

    C = (A & B);
    D = (A | B);
    E = (~ A);
    F = (A << 1);
    G = (B >> 1);
    H = ((A & B) ^ G);

    printf("\nA & B : %d\n", C);
    printf("A | B : %d\n", D);
    printf("~A : %d\n", E);
    printf("Left Shift of A is : %d\n", F);
    printf("Right Shift of B is : %d\n", G);
    printf("A ^ B : %d\n", H);

    return 0;
}