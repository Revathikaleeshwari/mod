#include<stdio.h>
int main()
{
int a,b,i;
scanf("%d%d",&a,&b);
while(a>=b)
{
a=a-b;
i++;
}
printf("%d%d",&i,&a);
return 0;
}
