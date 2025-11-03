#include<stdio.h>
int main()
{
	int row1, row2, col1, col2;
	printf("Rows for Matrix 1: ");
	scanf("%d", &row1);
	printf("Columns for Matrix 1: ");
	scanf("%d", &col1);
	printf("Rows for Matrix 2: ");
	scanf("%d", &row2);
	printf("Columns for Matrix 2: ");
	scanf("%d", &col2);
	if(row1 > 3 || row2 > 3 || col1 > 3 || col2 > 3)
	{
		printf("Maximum Size (3x3)!\n");
		return 0;
	}
	if(col1 != row2)
	{
		printf("Cannot Perform Multiplication!\n");
		return 0;
	}
	int mat1[row1][col1];
	int mat2[row2][col2];
	int i, j, k;
	printf("Enter Elements for Matrix 1:\n");
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col1; j++)
		{
			printf("Element (%d,%d) = ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\nEnter Elements for Matrix 2:\n");
	for(i=0; i<row2; i++)
	{
		for(j=0; j<col2; j++)
		{
			printf("Element (%d,%d) = ", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	int mul[row1][col2];
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col2; j++)
		{
			int sum = 0;
			for(k=0; k<col1; k++)
			{
				sum += (mat1[i][k] * mat2[k][j]);
			}
			mul[i][j] = sum;
		}
	}
	
	printf("\nMultiplied Matrix:\n");
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col2; j++)
		{
			printf("%d ", mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
