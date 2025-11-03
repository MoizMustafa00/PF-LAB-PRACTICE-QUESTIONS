#include<stdio.h>
int main()
{
	int id[10];
	int i, j;
	printf("Enter 10 Elements:\n");
	for(i=0; i<10; i++)
	{
		printf("Element %d = ", i+1);
		scanf("%d", &id[i]);
	}
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(id[i] == id[j])
			{
				id[j] = -1;
			}
		}
	}
	printf("Updated Array: ");
	for(i=0; i<10; i++)
	{
		printf("%d", id[i]);
	}
	return 0;
}
