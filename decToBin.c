#include<stdio.h>
int main()
{
    
  long long int temp,dec=69,bin=0,i=1,dis=2;
    while(dec!=0){
        temp=dec%dis;
        bin+=temp*i;
        dec=dec/dis;
        i*=10;
    }

    printf("%lld",bin);
    return 0;
}