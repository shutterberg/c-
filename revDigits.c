#include <stdio.h>
int main()
{
    int num, rev = 0, temp,rem;
    scanf("%d", &num);
    temp=num;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        rev +=(temp*temp*temp);
    }
    if(temp==rev)
    printf("%d is armstrong", rev);
    else
    printf("Not armstrong");
    return 0;
}