#include <stdio.h>
int BSearch(int A[], int n, int key)
{
    int l = 0, r = n - 1, mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    int i, n, A[100], key, p;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements separated by space : ");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("The elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
    printf("Enter the element to be searched : ");
    scanf("%d", &key);
    p = BSearch(A, n, key);
    if (p == -1)
        printf("%d not found", key);
    else
        printf("%d found at index %d\n", key, p);
}