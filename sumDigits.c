#include <stdio.h>
int main()
{
    int num, sum = 0, temp;
    scanf("%d", &num);
    while (num != 0)
    {
        temp = num % 10;
        num /= 10;
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}