#include<stdio.h>
int main()
{
	int n,s=0,rem;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
	rem=n%10;
	s=s+rem;
	n=n/10;}
	printf("sum is %d",&s);
	return 0;
}
