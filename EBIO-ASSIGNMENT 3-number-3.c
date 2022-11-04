#include <stdio.h>
#include <math.h>
#include <conio.h>

int main ()
{
	char name[40];
	int choice;
	float W, R, GrossIncome, TaxDeduction, NetIncome;
	
	do
	{
	
	printf("Enter an Employee's Name: ");
	scanf("%s", name);
	printf("Input the number of Hours of Work: ");
	scanf("%f", &W);
	printf("Input the Rate per Hour: ");
	scanf("%f", &R);
	system("cls");

	GrossIncome = W * R;
	if (GrossIncome > 30000)
	{
		TaxDeduction = GrossIncome * 0.20;
	}
	else
	{
		TaxDeduction = GrossIncome * 0.10;
	}
	NetIncome = (GrossIncome - TaxDeduction);

	system("cls");
	printf("---------------Employee's Information---------------\n \n");
	printf("Employee's Name: %s \n", name);
	printf("Hours of Work: %.2f \n", W);
	printf("Rate per Hour: %.2f \n", R);
	printf("Gross Income: %.2lf \n", GrossIncome);
	printf("Tax Deduction: %.2lf \n", TaxDeduction);
	printf("Net Income: %.2lf \n", NetIncome);
	printf("---------------Employee's Information---------------\n");
	
	
// Continue Computing for Net Income?
	printf("Task completed.\n");
	printf("Continue computing? y/n: ");
	scanf("%s", &choice);

} 
	while (choice == 'Y'||choice == 'y');
	
	printf("---------------Exiting the Program---------------\n");
	printf("Thank you for using this program and God Bless!! \n");
}
