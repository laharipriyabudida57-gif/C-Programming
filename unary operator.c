#include<stdio.h>
int main()
{
	int X=10,p,q,r,s;
	p=++X;
	printf("p=%d",p);
	q=X--;
	printf("\n q=%d",q);
	r=X++;
	printf("\n r=%d",r);
	s=--X;
	printf("\n s=%d",s);
	printf("\n X=%d",X);
	return 0;
}
