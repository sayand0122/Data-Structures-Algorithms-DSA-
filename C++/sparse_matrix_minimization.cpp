#include <stdio.h>
#define max 100
int main()
{
    int A[max][max], B[max][3], m, n, i, j, s = 0;
    printf("Enter the number of rows and columns of the Sparse Matrix : ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] != 0)
            {
                B[s + 1][0] = i;
                B[s + 1][1] = j;
                B[s + 1][2] = A[i][j];
                s++;
            }
        }
    }
    B[0][0] = m;
    B[0][1] = n;
    B[0][2] = s;
    printf("The minimized matrix is : \n");
    for (i = 0; i < s + 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}