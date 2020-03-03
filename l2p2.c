#include<stdio.h>
int main()
{
	unsigned int n,s=0;
	scanf("%d", &n);
	for(int i=n;i>0;i/=10)
		s+=i%10;
	printf("%d\n", s);
}

