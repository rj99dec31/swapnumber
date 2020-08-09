#include<stdio.h>
int main()
{
	int a,b;
	a=4;
	b=8;
	printf("before swap a= %d b= %d  \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap a=%d and b= %d",a,b);
	return 0;
}
