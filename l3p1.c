#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,d=2,first=0;
	scanf("%d", &n);
	printf("n=");
	while(n>1)
	{
		int c=0;
		while(n%d==0)
		{
			c++;
			n/=d;
		}
		if(c>0)
		{
			if(first)
				printf("+");
			printf("%d^%d", d,c);
			first++;

	}
	c=0;
	d++;
	
	}
	printf("\n");
}
