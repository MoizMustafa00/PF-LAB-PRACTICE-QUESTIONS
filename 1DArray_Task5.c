#include<stdio.h>
int main()
{
	int arr[10];
	printf("Enter 10 integers:\n");
	int i, max=0, min=0, diff=0;
	for(i=0; i<10; i++)
	{
		printf("Element %d = ", i+1);
		scanf("%d", &arr[i]);
	}
	max = min = arr[0];
	for(i=1; i<10; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
		else if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	diff = max - min;
	printf("The Difference b/w the Largest and Smallest Element = %d", diff);
	return 0;
}
