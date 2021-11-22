#include"header.h"
#include<stdio.h>
int main()
{
int a,b,res1,res2;
printf("enter the values:");
scanf("%d %d",&a,&b);
res1=sum(a,b);
res2=sub(a,b);
printf("sum=%d",res1);
printf("sub=%d",res2);
return 0;
}
