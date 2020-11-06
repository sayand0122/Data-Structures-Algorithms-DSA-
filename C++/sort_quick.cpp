#include <stdio.h>
int partition(int a[], int lb, int ub)
{
    int start, end, pivot, t1, t2;
    pivot = a[lb];
    start = lb;
    end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            t1 = a[start];
            a[start] = a[end];
            a[end] = t1;
        }
    }
    t2 = a[lb];
    a[lb] = a[end];
    a[end] = t2;
    return end;
}
void QuickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc;
        loc = partition(a, lb, ub);
        QuickSort(a, lb, loc - 1);
        QuickSort(a, loc + 1, ub);
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
    QuickSort(a, 0, n - 1);
    printf("The sorted elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}