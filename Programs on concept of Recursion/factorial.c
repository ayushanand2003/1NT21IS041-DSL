#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("enter the number whose factorial has to be calculated:\n");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial=%d",f);
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}					
