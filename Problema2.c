#include<stdio.h>
#include<stdlib.h>

int A[15],B[15],C[15];

int main()
{
int a,b;
scanf("%d %d", &a, &b);
while (a>0)
{
	A[a%10]++;
	a=a/10;
}
while (b>0)
{
	B[b%10]++;
	b=b/10;
}
for(int i=0;i<10;i++)
{
	if(A[i]>0 && B[i]>0)
	{
		if(C[i]==0)
		C[10]++;
		C[i]++;
	}
}
printf("avem %d cifre comune, acestea fiind ",C[10]);
for(int i=0;i<10;i++)
{
	if(C[i]>0)
		printf("%d ",i);
}
}