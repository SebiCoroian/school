#include<stdio.h>
int main()
{
	unsigned int n,s=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	
	printf("%d\n", s);
}

/*

%d -- int
%f -- float
%c -- char

*/
