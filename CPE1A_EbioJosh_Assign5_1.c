#include <stdio.h>

int main()
{
	char str1[60], str2[60], j, e;
	int count1=0, count2=0, count3=0;
	printf("\n Enter first string:");
	scanf("%s", str1);
	printf("\n Enter second string:");
	scanf("%s", str2);
	for (j=0;str1[j]!='\0';++j, ++count1);
	for (e=0;str2[e]!='\0';++j, ++e, ++count2)
		{
			str1[j]=str2[e];
		}
	count3 = count1 + count2;
	str1[j] = '\0';
	printf("\n output:%s", str1);
	printf("\n Line count: \n String 1=%d \n String 2=%d \n String 3=%d", count1, count2, count3);
	return 0;
}
