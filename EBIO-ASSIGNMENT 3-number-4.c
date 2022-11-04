#include <stdio.h>
#include <math.h>

int main()
{
// integers
	int x, y, i; //p is initially set to 1
	double p = 1;

// intro
	printf("Programming Loop\n \n");
	printf("Input the number to be multiplied (x): ");
	scanf("%d", &x);
	printf("Input the number of repititions (y): ");
	scanf("%d", &y);
	
// executing the while loop
	printf("p = %.2lf\n", p);
	while (i <= y)
	{
		printf("p = %.2lf x %.2lf = %.2lf\n", p, x, p * x);
		p = p * x;
		i ++;
	}
	printf("END\n");
}
