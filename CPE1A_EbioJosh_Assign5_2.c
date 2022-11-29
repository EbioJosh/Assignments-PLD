#include <stdio.h>

int main()
{
	char str1[60], str2[60], j;
	int e, length=0;
	printf("\n Enter string:");
	scanf("%s", str1);
	for (j=0; str1[j] != '\0'; j++)
	{
		length++;
	}
	length = length - 2;
	e = 0;
	while (length >= 0)
	{
		str2[e] = str1[length];
		e++;
		length--;
	}
	str2[e]= '\0';
	printf("\n Palindrome is %s%s", str1, str2);
	return 0;
}
