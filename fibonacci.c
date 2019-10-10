#include<stdio.h>
void main()
{
int a=0,b=1,c,n,i;
printf("enter the value of n");
scanf("%d",&n);
printf("\n%d",a);
printf("\n%d",b);
for(i=1;i<=n;i++)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
}
