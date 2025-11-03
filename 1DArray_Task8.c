#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter the string:\n");
	scanf("%[^A-Za-z\n]", str);
	printf("Non alphabetic characters are: %s", str);
	return 0;
}
