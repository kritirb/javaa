#include<stdio.h>
int main()
{
	int n,rem,p=0, kriti;
	printf("enter the number");
	scanf("%d",&n);
	kriti=n;
	while(n>0)
	{
		rem=n%10;
		p=p*10+rem;
		n=n/10;
	}
	if(kriti==p)
	{
		printf("palindrome =%d",kriti);
	}
	else
	{
		printf("not palindrome = %d",kriti);
	}
	return 0;
}
