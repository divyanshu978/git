#include<stdio.h>
int main() {
int a=0,b=1,n=12,c,i;
for(i=1; i<n; i++)
{
    printf("%d \n",a);
    c=a+b;
    a=b;
    b=c;
}

return 0;
}
