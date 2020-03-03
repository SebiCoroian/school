#include<stdlib.h>
#include<stdio.h>
int main()
{
	unsigned int n,s=0;
	scanf("%d", &n);
while(n>0)
{
	s+=n%10;
	n/=10;
}
	
	printf("%d\n", s);
}

/*

%d -- int
%f -- float
%c -- char

*/
