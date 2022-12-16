#include<stdio.h>    
#include<stdlib.h>

int main(){
	int a[10][10],b[10][10],multiply[10][10],r,c,i,j,k;    
	system("cls");  
	printf("enter the number of row(s)=");    
	scanf("%d",&r);    
	printf("enter the number of column(s)=");    
	scanf("%d",&c);    
	printf("Enter the first matrix element=\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)    
		{ 
			scanf("%d",&a[i][j]);    
		}   

	}
	printf("Enter the second matrix element=\n");    
	for(i=0;i<r;i++)    
	{
		for(j=0;j<c;j++)    
		{
		scanf("%d",&b[i][j]);    
		}
	}
	printf("Multiplying of the matrix=\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)    
		{
		multiply[i][j]=0;    
		for(k=0;k<c;k++)    
			{
				multiply[i][j]+=a[i][k]*b[k][j];    
			}
		}
	}
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			printf("%d\t",multiply[i][j]);    
		}    
	printf("\n");    
	}
	return 0;  

}
