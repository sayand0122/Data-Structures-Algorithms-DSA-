#include <stdio.h>
int Interpolation(int A[], int n, int key)
{
    int pos, l, h;
    l = 0;
    h = n - 1;
    while (l <= h)
    {
        pos = l + (((key - A[l]) / (A[h] - A[l])) * (h - l));
        if (key == A[pos])
            return pos;
        else if (key < A[pos])
            h = pos - 1;
        else
            l = pos + 1;
    }
    return -1;
}
int main()
{
    int A[100], n, i, key, p;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements separated by space : ");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("The elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\nEnter the element to be searched : ");
    scanf("%d", &key);
    p = Interpolation(A, n, key);
    if (p == -1)
        printf("%d not found", key);
    else
        printf("%d found at index %d\n", key, p);
}