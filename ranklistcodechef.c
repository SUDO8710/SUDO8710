#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x % 25 == 0)
        {
            printf("%d\n", x / 25);
        }
        else
        {
            printf("%d\n", x / 25 + 1);
        }

        return 0;
    }
}