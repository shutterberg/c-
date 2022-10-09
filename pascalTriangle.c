#include <stdio.h>
int main()
{
   long long int space, i, j, k, n = 10, coef=1;
    for (i = 0; i <= n; i++)
    {
        for (space = 0; space < n - i; space++)
        {
            printf(" ");
        }
        for (j = 0; j <=i; ++j)
        {
            if (i == 0 || j == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf(" %3lld", coef);
        }
        printf("\n");
    }
}