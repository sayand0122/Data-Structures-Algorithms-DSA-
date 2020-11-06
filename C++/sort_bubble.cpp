#include <stdio.h>
int main()
{
    int A[100], i, j, n, temp, flag;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the %d elements separated by space : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("Your unsorted elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
    printf("The sorted elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}