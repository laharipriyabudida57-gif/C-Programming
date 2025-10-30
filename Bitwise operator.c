#include<stdio.h>
int main()
{
	int X,Y,a,b;
	printf("enter X,Y values");
	scanf("%d%d",&X,&Y);
	a=X&Y;
	printf("Bitwise AND=%d",a);
	b=X;Y;
	printf("\n Bitwise OR=%d",b);
	return 0;
}
