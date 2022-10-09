#include <stdio.h>
#include<string.h>
int main()
{int i;
    char ch[20];
    scanf("%s", &ch);
   for(i=0;ch[i]!='\0';i++){
       ch[i]=ch[i]+32;
   }
   
    printf("%s",ch);
    return 0;
}