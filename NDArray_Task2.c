#include<stdio.h>
int main()
{
	int i, j;
	int row, col;
	printf("Enter the Number of Rows: ");
	scanf("%d", &row);
	printf("Enter the Number of Columns: ");
	scanf("%d", &col);
	int mat[row][col];

	if(row <= 0 || col <= 0)
	{
		printf("\nInvalid Row/Column Number!\n");
		return 0;
	}
	
	printf("\nEnter Elements of the Matrix:\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Element (%d,%d) = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nOriginal Matrix:\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	int isSquare = 0;
	if(row == col)
	{
		printf("\nSquare Matrix!\n");
		isSquare = 1;
	}
	
	int isRect = 0;
	if(row != col)
	{
		printf("\nRectangular Matrix!\n");
		isRect = 1;
	}
	
	int isZero = 1;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(mat[i][j] != 0)
			{
				isZero = 0;
				break;
			}
		}
		if(!isZero)
		break;
	}
	if(isZero)
	{
		printf("\nZero & Null Matrix!\n");
	}
	
	int isIdentity = 1;
	if(isSquare)
	{
		for(i=0; i<row; i++)
		{
			for(j=0; j<col; j++)
			{
				if(i == j && mat[i][j] != 1)
				{
					isIdentity = 0;
					break;
				}
				else if(i != j && mat[i][j] != 0)
				{
					isIdentity = 0;
					break;
				}
			}
			if(!isIdentity)
			break;
		}
	}
	else
	{
		isIdentity = 0;
	}
	if(isIdentity)
	{
		printf("\nIdentity Matrix!\n");
	}
	
	int isDiagonal = 1;
	if(isSquare)
	{
		for(i=0; i<row; i++)
		{
			for(j=0; j<col; j++)
			{
				if(i != j && mat[i][j] != 0)
				{
					isDiagonal = 0;
					break;
				}
			}
			if(!isDiagonal)
			break;
		}
	}
	else
	{
		isDiagonal = 0;
	}
	if(isDiagonal)
	{
		printf("\nDiagonal Matrix!\n");
	}
	
	int isScalar = 1;
	int same = mat[0][0];
	if(isSquare)
	{
		for(i=0; i<row; i++)
		{
			for(j=0; j<col; j++)
			{
				if((i == j && mat[i][j] != same) || (i != j && mat[i][j] != 0))
				{
					isScalar = 0;
					break;
				}
			}
			if(!isScalar)
			break;
		}
	}
	else
	{
		isScalar = 0;
	}
	if(isScalar)
	{
		printf("\nScalar Matrix!\n");
	}
	
	int isUpper = 1;
	if(isSquare)
	{
		for(i=1; i<row; i++)
		{
			for(j=0; j<i; j++)
			{
				if(mat[i][j] != 0)
				isUpper = 0;
			}
			if(!isUpper)
			break;
		}
	}
	else
	{
		isUpper = 0;
	}
	if(isUpper)
	{
		printf("\nUpper Triangular Matrix!\n");
	}
	
	int isLower = 1;
	if(isSquare)
	{
		for(i=0; i<row; i++)
		{
			for(j=i+1; j<col; j++)
			{
				if(mat[i][j] != 0)
				isLower = 0;
			}
			if(!isLower)
			break;
		}
	}
	else
	{
		isLower = 0;
	}
	if(isLower)
	{
		printf("\nLower Triangular Matrix!\n");
	}
	
	int isSymmetric = 1;
	if(isSquare)
	{
    	for(i=0; i<row; i++)
		{
        	for(j=0; j<i; j++)
			{
            	if(mat[i][j] != mat[j][i])
				{
                	isSymmetric = 0;
                	break;
            	}
        	}
        	if(!isSymmetric)
            break;
    	}
	}
	else
	{
    	isSymmetric = 0;
	}
	if(isSymmetric)
	{
		printf("\nSymmetric Matrix!\n");
	}
	
	int isSkewSymmetric = 1;
	if(isSquare)
	{
    	for(i=0; i<row; i++)
		{
			if(mat[i][i] != 0)
			{
				isSkewSymmetric = 0;
				break;
			}
        	for(j=0; j<i; j++)
			{
            	if(mat[i][j] != -(mat[j][i]))
				{
                	isSkewSymmetric = 0;
                	break;
            	}
        	}
        	if(!isSkewSymmetric)
            break;
    	}
	}
	else
	{
    	isSkewSymmetric = 0;
	}
	if(isSkewSymmetric)
	{
		printf("\nSkew Symmetric Matrix!\n");
	}
	
	if(isSquare)
	{
    float temp[row][col];
    for(i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            temp[i][j] = mat[i][j];
        }
    }

    float det = 1;
    int sign = 1;
    int singular = 0;

    for(i=0; i<row; i++)
    {
        if(temp[i][i] == 0)
        {
            int swapRow = -1;
            int k;
            for(k=i+1; k<row; k++)
            {
                if(temp[k][i] != 0)
                {
                    swapRow = k;
                    break;
                }
            }
            if(swapRow == -1)
            {
                singular = 1;
                break;
            }
            for(j=0; j<col; j++)
            {
                float t = temp[i][j];
                temp[i][j] = temp[swapRow][j];
                temp[swapRow][j] = t;
            }
            sign *= -1;
        }
        int k;
        for(k=i+1; k<row; k++)
        {
            if(temp[i][i] == 0)
            {
                singular = 1;
                break;
            }
            float ratio = temp[k][i] / temp[i][i];
            for(j=i; j<col; j++)
            {
                temp[k][j] -= ratio * temp[i][j];
            }
        }
        if(singular)
            break;
    }
    if(!singular)
    {
        for(i=0; i<row; i++)
        {
            det *= temp[i][i];
		}
        det *= sign;

        if(det == 0)
            printf("\nSingular Matrix!\n");
        else
            printf("\nNon-Singular Matrix!\n");
    }
    else
    {
        printf("\nSingular Matrix!\n");
    }
	}
    
    int isEqual = 1;
    int mat2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for(i=0; i<row; i++)
    {
    	for(j=0; j<col; j++)
    	{
    		if(mat2[i][j] != mat[i][j])
    		{
				isEqual = 0;
    			break;
			}
		}
		if(!isEqual)
		break;
	}
	if(isEqual)
	printf("\nEqual Matrix!\n");
	
	if(row == 1)
	printf("\nRow Matrix!\n");
	
	if(col == 1)
	printf("\nColumn Matrix!\n");
	
	int isIdempotent = 1;
	int result[5][5] = {0};
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
        	int k;
            for(k=0; k<row; k++)
            {
                result[i][j] += mat[i][k] * mat[k][j];
            }
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(result[i][j] != mat[i][j])
            {
                isIdempotent = 0;
                break;
            }
        }
        if(!isIdempotent)
            break;
    }
    if(isIdempotent)
        printf("\nIdempotent Matrix!\n");
	
	if(isSquare)
	{
		int power, k, nilpotent = 0;
		int tempNil[5][5], resultNil[5][5];	
		for(i=0; i<row; i++)
		{
			for(j=0; j<col; j++)
			{
				tempNil[i][j] = mat[i][j];
			}
		}
		for(power=1; power<=row;
		 power++)
		{
			for(i=0; i<row; i++)
			{
				for(j=0; j<col; j++)
				{
					resultNil[i][j] = 0;
					for(k=0; k<row; k++)
					{
						resultNil[i][j] += tempNil[i][k] * mat[k][j];
					}
				}
			}
			int isZero = 1;
			for(i=0; i<row; i++)
			{
				for(j=0; j<col; j++)
				{
					if(resultNil[i][j] != 0)
					{
						isZero = 0;
						break;
					}
				}
				if(!isZero)
				break;
			}
			if(isZero)
			{
				printf("\nNilpotent Matrix (Index %d)!\n", power);
				nilpotent = 1;
				break;
			}
			for(i=0; i<row; i++)
			{
				for(j=0; j<col; j++)
				{
					tempNil[i][j] = resultNil[i][j];
				}
			}
		}
	}
	return 0;
}
