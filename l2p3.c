#include<stdio.h>
int main()
{
	unsigned int n,c,s=0;
	scanf("%d%d", &n, &c);
  for(int i=n;i>0;i/=10)
		s=(i%10==c)? s+1 : s;
	printf("%d\n", s);
}

