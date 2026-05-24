#include<stdio.h>
int main()
{
	int n,p=0,a;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		p=p*10+a;
		n=n/10;
	}
	printf("reverse =%d",p);
	return 0;
}
