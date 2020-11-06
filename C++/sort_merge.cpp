#include <stdio.h>
void Merge(int a[], int lb, int mid, int ub)
{
    int b[ub + 1], i, j, k;
    i = lb;
    j = mid + 1;
    k = lb;
    while (i <= mid && j <= ub)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for (k = lb; k <= ub; k++)
        a[k] = b[k];
}
void MergeSort(int a[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        MergeSort(a, lb, mid);
        MergeSort(a, mid + 1, ub);
        Merge(a, lb, mid, ub);
    }
}
int main()
{
    int i, n, a[100];
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements separated by space : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The unsorted elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    MergeSort(a, 0, n - 1);
    printf("The sorted elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}