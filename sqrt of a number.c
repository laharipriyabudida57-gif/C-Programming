#include<stdio.h>
#include<math.h>
int main()
{
	int n,s;
	hi:
		printf("enter n value");
		scanf("%d",&n);
		if (n<0)
		goto hi;
		s=sqrt(n);
		printf("sqrt=%d",s);
		return 0;		
}
