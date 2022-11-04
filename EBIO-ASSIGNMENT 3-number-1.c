#include <stdio.h>
#include <math.h>
#include <conio.h>
#define pi 3.1415

int main()
{
// intro
	printf("This program's main purpose is to find the Area and the Perimeter of selected 2 dimensional figures.\n");
	printf("Press anything to continue");
	getch();
	system("cls"); // Clear Message
	
// main menu
	int choice = 0;
	
	printf("How Can I Assist you Today?\n");
	printf("----------Shapes available:----------\n \n");
	printf("     1-------------------Rectangle\n");
	printf("     2-------------------Square\n");
	printf("     3-------------------Circle\n");
	printf("     4-------------------Right Triangle\n \n");
	printf("     Enter your desired shape: ");
	fflush(stdout);
	scanf("%d", &choice);
	
	if (choice == 1) // Area & Perimeter for Rectanglse
	{
		float RL, RW, area, perimeter;
		
		system ("cls");
		printf("Area and Perimeter of the Rectangle\n");
		printf("Enter the length of the Rectangle: ");
		scanf("%f", &RL);
		printf("Enter the width of the Rectangle: ");
		scanf("%f", &RW);
		area = RL * RW;
		printf("The Area of a rectangle based on your given variables is equal to %.2f\n", area);
		perimeter = 2*(RL + RW);
		printf("Perimeter of the Rectangle based on your given variables is equal to %.2f\n", perimeter);
		printf("The Length of a Rectangle: %.2f\n", RL);
		printf("The Width of a Rectangle: %.2f\n", RW);
	}
	else if (choice == 2) // Area & Perimeter formula for Square
	{
		float x, area, perimeter;
		
		system ("cls");
		printf("Area of the Square\n");
		printf("Input the variable for x: ");
		scanf("%f", &x);
		area = x*x;
		printf("The Area of a square is: %.2f\n", area);
		printf("Perimeter of the Square\n");
		printf("Input x = %.2f\n", x);
		perimeter = 4 * x;
		printf("The Perimeter of a square is: %.2f\n", perimeter);
	}
	else if (choice == 3) // Area & Circumference formula for Circle
	{
		float x, area, perimeter;
		
		system("cls");
		printf("Area of the Circle\n");
		printf("Input the variable for x: ");
		scanf("%f", &x);
		area = pi*x*x;
		printf("The Area of a circle is: %.2f\n", area);
		printf("Perimeter of the Circle\n");
		printf("Input x = %.2f\n", x);
		perimeter = 2 * pi * x;
		printf("The Perimeter of a circle is: %.2f\n", perimeter);
	}
	else if (choice == 4) // Area & Perimeter for Right Triangle
	{
		float a, b, c, area, perimeter;
		
		system("cls");
		printf("Area of the Right Triangle\n");
		printf("Input the variable for a: ");
		scanf("%f", &a);
		printf("Input the variable for b: ");
		scanf("%f", &b);
		area = (a*b)/2;
		printf("The Area of a right triangle: %.2f\n", area);
		printf("Perimeter of the Right Triangle\n");
		printf("Input a = %.2f\n", a);
		printf("Input b = %.2f\n", b);
		c = sqrt((a*a) + (b*b));
		perimeter = a + b + c;
		printf("The Perimeter of a right triangle is: %.2f\n", perimeter);
	}
	else (choice >= 4);
	{
	printf("Thank you for using this program, Hope your queries were answered.\n");
	}
	return 0;
}

