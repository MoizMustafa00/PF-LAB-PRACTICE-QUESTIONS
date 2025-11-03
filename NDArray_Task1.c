#include<stdio.h>
#include<math.h>
int main()
{
	float mat[3][3];
	float determinant;
	float cofactor[3][3];
	float inverse[3][3];
	int i, j;
	printf("Enter Elements of the Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Element (%d,%d) = ", i, j);
			scanf("%f", &mat[i][j]);
		}
	}
	
	printf("\nOriginal Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%.2f  ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose of a Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%.2f  ", mat[j][i]);	
		}
		printf("\n");
	}
	
	printf("\nDeterminant of a Matrix:\n");
	determinant = (mat[0][0] * ((mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1])))
				- (mat[0][1] * ((mat[1][0] * mat[2][2]) - (mat[2][0] * mat[1][2])))
				+ (mat[0][2] * ((mat[1][0] * mat[2][1]) - (mat[2][0] * mat[1][1])));
	printf("%.2f\n", determinant);
	
	printf("\nCofactor of a Matrix:\n");
	cofactor[0][0] = pow(-1, 0+0) * ((mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1]));
	cofactor[0][1] = pow(-1, 0+1) * ((mat[1][0] * mat[2][2]) - (mat[2][0] * mat[1][2]));
	cofactor[0][2] = pow(-1, 0+2) * ((mat[1][0] * mat[2][1]) - (mat[2][0] * mat[1][1]));
	cofactor[1][0] = pow(-1, 1+0) * ((mat[0][1] * mat[2][2]) - (mat[2][1] * mat[0][2]));
	cofactor[1][1] = pow(-1, 1+1) * ((mat[0][0] * mat[2][2]) - (mat[2][0] * mat[0][2]));
	cofactor[1][2] = pow(-1, 1+2) * ((mat[0][0] * mat[2][1]) - (mat[2][0] * mat[0][1]));
	cofactor[2][0] = pow(-1, 2+0) * ((mat[0][1] * mat[1][2]) - (mat[1][1] * mat[0][2]));
	cofactor[2][1] = pow(-1, 2+1) * ((mat[0][0] * mat[1][2]) - (mat[1][0] * mat[0][2]));
	cofactor[2][2] = pow(-1, 2+2) * ((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%.2f  ", cofactor[i][j]);	
		}
		printf("\n");
	}
	
	printf("\nAdjoint of a Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%.2f  ", cofactor[j][i]);	
		}
		printf("\n");
	}
	
	printf("\nInverse of a Matrix:\n");
	if(determinant == 0)
	{
		printf("Inverse Does Not Exist!\n");
	}
	else
	{
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				inverse[i][j] = cofactor[j][i] / determinant;
				printf("%.2f  ", inverse[i][j]);	
			}
			printf("\n");
		}
	}
	return 0;
}
