#include <stdio.h>
#define MAX 50

int main()
{
    int arr[MAX][MAX], barr[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns, sum;

    printf("Enter the rows and columns of the matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the elements of matrix a:\n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the rows and columns of the matrix b: ");
    scanf("%d %d", &brows, &bcolumns);

    if (brows != acolumns)
    {
        printf("We cannot multiply the matrices a and b because the number of columns in matrix a does not match the number of rows in matrix b.\n");
        return 1;  // Return early as multiplication is not possible
    }

    printf("Enter the elements of matrix b:\n");
    for (int i = 0; i < brows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            scanf("%d", &barr[i][j]);
        }
    }

    // Initialize product matrix to zero
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            sum = 0;  // Initialize sum for each element in product matrix
            for (int k = 0; k < acolumns; k++)
            {
                sum += arr[i][k] * barr[k][j];
            }
            product[i][j] = sum;
            
        }
    }

    // Print the resultant matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// const int a[5] = { 0};
// now array cannot be changed 
