#include<stdio.h>
int main()
{
    int arr[3][3][3];
    int layer, row, col, i, j;
    int identical;

    printf("Enter 27 Elements for the 3x3x3 Matrix:\n");
    for(layer=0; layer<3; layer++)
    {
        printf("\nEnter Elements for Layer %d\n", layer+1);
        for(row=0; row<3; row++)
        {
            for(col=0; col<3; col++)
            {
                scanf("%d", &arr[layer][row][col]);
            }
        }
    }

    printf("\nLayer Similarity Report\n");
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            identical = 1;
            for(row=0; row<3; row++)
            {
                for(col=0; col<3; col++)
                {
                    if(arr[i][row][col] != arr[j][row][col])
                    {
                        identical = 0;
                        break;
                    }
                }
                if(!identical)
                    break;
            }
            printf("Layer %d and Layer %d are %s.\n",i+1, j+1, identical ? "Identical" : "Different");
        }
    }
    return 0;
}

