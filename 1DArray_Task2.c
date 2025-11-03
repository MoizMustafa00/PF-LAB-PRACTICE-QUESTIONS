#include<stdio.h>
int main()
{
	int arr[10];
	int num, count = 0;
	printf("Enter Elements of the Array:\n");
	int i;
	for(i=0; i<10; i++)
	{
		printf("Element %d = ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Enter a Number You Want to Search: ");
	scanf("%d", &num);
	for(i=0; i<10; i++)
	{
		if(num == arr[i])
		count++;
	}
	if(count!=0)
	{
		printf("Number %d Appered %d Times\n", num, count);
	}
	else
	{
		printf("Number Not Found\n");
	}
	return 0;
}
