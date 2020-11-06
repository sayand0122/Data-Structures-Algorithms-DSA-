#include <stdio.h>
void insertion(int A[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}
int main()
{
    int i, n, A[100];
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements separated by space : ");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("The unsorted elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
    insertion(A, n);
    printf("The sorted elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}
