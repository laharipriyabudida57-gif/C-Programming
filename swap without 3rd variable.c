#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("\n before swap a=%d b=%d",a,b);
	a=a+b;
	b=b-a;
	a=a-b;
	printf("\n after swap a=%d b=%d",a,b);
	return 0;
}
