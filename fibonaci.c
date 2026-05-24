#include<stdio.h>
int main()
{
	int i,f,f1,f2,n;
	printf("enter the fibonaci series");
	scanf("%d",&n);
	f1=1;
	f2=1;
	printf("%d\t%d\t",f1,f2);
	for(i=1;i<n;i++)
	{
		f=f1+f2;
		printf("%d\t",f);
		f1=f2;
		f2=f;
	}
	return 0;
}
