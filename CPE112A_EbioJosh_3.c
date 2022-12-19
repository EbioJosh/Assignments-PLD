#include <stdio.h>
#include <math.h>

double power(double base, int exponent)
{
	int z, w;
	if(exponent>0)
	{
		z = base*pow(base, exponent-1);
		printf("%d",z);
	}
	else if(exponent=0)
	{
		printf("1");
	}
	else if(exponent<0)
	{
		w = 1/pow(base,exponent);
		printf("%d",w);
	}
	
	
}
int main(){
	int base,exponent;
	printf("Please input a positive integer: ");
	scanf("%d",&base);
	
	if(base<=0)
	{
		printf("\n Please enter a positive integer");
	}
	else
	{
		printf("Please input an integer: ");
		scanf("%d",&exponent);
	
	power(base,exponent);
	}
	printf("%.2lf^%d = %.2lf\n", base, exponent, pow(base, exponent));

	return 0;
}
