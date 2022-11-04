#include <stdio.h>
#include <math.h>
#include <conio.h>
#define feetConversion 30.48
#define yardConversion 91.44

int main ()
{
	// intro
	printf("This program can assists you in converting measurements and temperatures.\n");
	printf("Press any key to Continue...\n");
	getch();
	system("cls");
	
// interaction menu
	int choice;
	double cm, feet, yard, celsius, fahrenheit, temperature;
	
	printf("---------- Main Screen ----------\n");
	printf("Please Select a Converter: \n");
	printf("1.........Convert to Centimeter\n");
	printf("2.........Convert to Celsius\n");
	printf("3.........Convert to Farenheit\n");
	printf("Type the number of the corresponding measure you wish to convert--> ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			system("cls"); 
			printf("---------- Measurements Conversion ----------\n");
			printf("Input the value in Centimeter/s: ");
			scanf("%lf", &cm);
			feet = cm / feetConversion;
			yard = cm / yardConversion;
			printf("Centimeters in Feet: %lf\n", feet);
			printf("Centimeters in Yard: %lf\n", yard);
			break;
			
		case 2: 
			system("cls");
			printf("---------- Temp. Conversion (Celsius to Fahrenheit) ----------\n");
			printf("Input Temperature in Celsius: ");
			scanf("%lf", &celsius);
			fahrenheit = (celsius * 1.8) + 32;
			printf("Celsius in Fahrenheit: %.2lf\n", fahrenheit);
			break;
		
		case 3:
			system("cls");
			printf("---------- Temp. Conversion (Fahrenheit to Celsius) ----------\n");
			printf("Input Temperature in Fahrenheit: ");
			scanf("%lf", &fahrenheit);
			celsius = (fahrenheit - 32) * 0.555555556;
			printf("Fahrenheit in Celsius: %.2lf\n", celsius);
			break;
	}
	printf("\n \n \n---------------Exiting the Program---------------\n \n                       END");
	return 0;
}
