#include <stdio.h>
int main()
{
    int A[100], n, key, i;
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
    for (i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            printf("%d found at index %d.\n", key, i);
            break;
        }
    }
    if (i == n)
        printf("%d not found\n", key);
}
