// Program showing Bubble Sort implementation

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
    for (i = 0; i < n - 1; i++)
    {
        f = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;

                f++;
            }
        }
        if (f == 0)
            break;
    }
    printf("\nElements in sorted order: ");
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
