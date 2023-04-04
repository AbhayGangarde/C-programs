#include <stdio.h>

int PrizeMoney(int A, int B)
{
    int Temp = 0;
    Temp = (A * 10) + (B * 90);
    
    return Temp;
}

int main(void)
{
	int T = 0;
	scanf("%d", &T);
	
	while(T > 0)
	{
	    int X = 0, Y = 0, Temp = 0;
	    scanf("%d %d", &X, &Y);
	    
	    Temp = PrizeMoney(X, Y);
	    printf("%d \n", Temp);
	    
	    --T;
	}
	
	
	return 0;
}