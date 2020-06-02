#include<stdio.h>
#include<stdlib.h>

int sumOfDigits(int n)
{
	int s=0;
	while (n>0)
	{
		s=s+n%10;
		n=n/10;
	}
	return s;
}

int isEven(int n)
{
	if(n%2==0)
		return 1;
	return 0;
}

int main()
{
	int n,cnt=0,aux=1,i;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	if(!isEven(sumOfDigits(i)))
		printf("%d ",i);
}