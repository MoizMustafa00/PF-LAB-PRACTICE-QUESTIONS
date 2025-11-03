#include<stdio.h>
int main()
{
    int arr[3][3][3];
    int layer, row, col;
    int layerSum, overallSum = 0;

    printf("Enter 27 Elements for the 3x3x3 Array:\n");
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

    printf("\nAnalytical Results by Layer\n");
    for(layer=0; layer<3; layer++)
    {
        layerSum = 0;
        printf("\nLayer %d:\n", layer+1);
        for(row=0; row<3; row++)
        {
            for(col=0; col<3; col++)
            {
                printf("%4d", arr[layer][row][col]);
                layerSum += arr[layer][row][col];
            }
            printf("\n");
        }
        printf("Total for Layer %d: %d\n", layer+1, layerSum);
        overallSum += layerSum;
    }

    printf("\nOverall Total of All Layers: %d\n", overallSum);
    printf("Average Value per Element: %.2f\n", overallSum / 27.0);
    return 0;
}

