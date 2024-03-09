// Program showing insertion sort

#include <stdio.h>
int main()
{
    int a[100], i, n, j, f, t;
    do
    {
        printf("Enter size of array: ");
        scanf("%d", &n);
    } while (n < 0 && n > 100);
    printf("Enter %d elements in the array : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        f = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > f)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = f;
    }
    printf("\nElements in sorted order: ");
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}