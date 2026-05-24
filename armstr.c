#include<stdio.h>
int main()
{
	int n,kriti,a=0,rem,pow;
	printf("enter the number");
	scanf("%d",&n);
	kriti=n;
	while(n!=0)
	{
		rem=n%10;
		a= a+rem*rem*rem;
		n=n/10;
	}
	if(kriti==a)
	{
		printf("armstrong");
	}
	else
	{
		printf(" not armstrong");
	}
	return 0;
}
