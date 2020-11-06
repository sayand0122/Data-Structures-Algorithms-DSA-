#include <stdio.h>
int main()
{
    int i, j, temp, min, n, a[100];
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements separated by space : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The unsorted elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("The sorted elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}