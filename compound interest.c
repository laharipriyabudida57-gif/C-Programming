#include<stdio.h>
int main()
{
	int p,t,r,ci;
	printf("enter p,t,r values");
	scanf("%d%d%d",&p,&t,&r);
	ci=p*(pow(1+r/100,t)-1);
    printf("ci=%f",&ci);
    return 0;
}
