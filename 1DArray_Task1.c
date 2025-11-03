#include<stdio.h>
int main()
{
	int arr[5];
	int temp;
	int i;
	printf("Enter 5 integers for the 1st Array:\n");
	for(i=0; i<5; i++)
	{
		printf("Element %d = ", i+1);
		scanf("%d", &arr[i]);
	}
	temp=arr[4];
	for(i=4; i>0; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	for(i=0; i<5; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
