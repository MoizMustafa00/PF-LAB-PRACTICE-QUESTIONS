#include<stdio.h>
int main()
{
	char str[50];
	int vowel=0, cons=0;
	int i;
	printf("Enter a word: ");
	scanf("%[^\n]",str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i] == 'A'||str[i] =='a'||str[i] =='E'||str[i] =='e'||str[i] =='I'||str[i] =='i'||str[i] =='O'||str[i] =='o'||str[i] =='U'||str[i] =='u')
		{
			vowel++;
		}
		else
		{
			cons++;
		}
	}
	printf("The No of Vowels are %d\n", vowel);
	printf("The No of Consonants are %d\n", cons);
	return 0;
}
