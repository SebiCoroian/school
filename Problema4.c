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

int main()
{
	int n,m,cnt=0,aux=1;
	scanf("%d %d",&n,&m);
	while(cnt<n)
	{
		if(sumOfDigits(aux)<=m)
			{
				printf("%d ",aux);
				cnt++;
			}
		aux++;
	}
}