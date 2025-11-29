#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("enter your choice + - Add,- Subtract,* - Multiply,/ - Divide");
	scanf(" %c",&ch);
	switch (ch)
	{
		case '+' : c=a+b ; printf("Add=%d",c);
		break;
		case '-' : c=a-b ; printf("Subtract=%d",c);
		break;
		case '*' : c=a*b ; printf("Multiply=%d",c);
		break;
		case '/' : c=a/b ; printf("Divide=%d",c);
		break;
		default : printf("Invalid choice");
	}
	return 0;
}
