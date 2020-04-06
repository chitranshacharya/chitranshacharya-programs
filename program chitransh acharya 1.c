#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int a,b,c;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
