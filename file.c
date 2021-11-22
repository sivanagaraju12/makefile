#include<stdio.h>
int product(int x,int y)
{
x=x+2;
y=y+2;
return x*y;
}
int main()
{
int a = 4;
int b = 5;
int result = product(a,b);
printf("product of (a+2)and(b+2) is %d /n",result);
return 0;
}
