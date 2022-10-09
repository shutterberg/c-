#include <stdio.h>
int main()
{
    long long int dec=0, oct = 105, temp, factor = 1;
    while (oct != 0)
    {
        temp = oct % 10;
       dec += temp * factor;
        factor *= 8;
        oct = oct / 10;
    }
    printf("%lld", dec);
    return 0;
}