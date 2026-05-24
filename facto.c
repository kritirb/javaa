#include<stdio.h>
int main()
{
	int i,n,facto=1,j;
	printf("enter the number");
	scanf("%d\n",&n);
	if(n<0)
	{
		printf("not valid");
	}
	else if(n==0)
	{
		printf("factorial=1");
	}
	else 
	for(i=1;i<n;i++)
	{
		facto=1;
		{
			for(j=1;j<i;j++)
			{
				facto=facto*i;
			}
printf("facto=%d",i,facto);
}
}
return 0;
}
