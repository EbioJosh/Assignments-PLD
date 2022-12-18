#include <stdio.h>
#include <math.h>

double power(int x, int y)
{
	int z, w;
	if(y>0){
		z = x*pow(x, y-1);
		printf("%d",z);
	}
	else if(y=0){
		printf("1");
	}
	else if(y<0){
		w = 1/pow(x,y);
		printf("%d",w);
	}
	
	
}
int main(){
	int x,y;
	printf("Please input a positive integer: ");
	scanf("%d",&x);
	if(x<0){
		printf("Please enter a positive integer");
	}
	else if(x>0)
	{
	printf("Please input an integer: ");
	scanf("%d",&y);
	
	
	power(x,y);
	}
	return 0;
}
