#include <stdio.h>

void power(int x, int y, double *p2)
{
	int i;	
	double p=1;
	for ( i=1; i<=y;  i++ )
	{
		p = p * x;
	}
	*p2=p;
}	

int main(){	

	int x, y;
	double p1;
	
	printf("Please input the first integer (base): ");
	scanf("%d",&x);
	if (x<0)
    {
        printf("\n Please input a positive integer.");
    }
    else{
    printf("\nPlease input the second integer (exponent): ");
	scanf("%d",&y);
	
	power(x,y,&p1);
	printf("\n%d^%d = %.2lf\n", x, y, p1);
	return 0;
	}
}
