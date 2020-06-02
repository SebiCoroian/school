#include<stdio.h>
#include<stdlib.h>

float avg(float a, float b)
{
	return (a+b)/2;
}

int main()
{
	float v[105],X[105];
	int n,cnt=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%f", &X[i]);
	}
	for(int i=1;i<n;i++)
	{
		v[cnt]=X[i];
		v[cnt+1]=avg(X[i],X[i+1]);
		cnt=cnt+2;
	}
	v[cnt]=X[n];
	for(int i=1;i<=cnt;i++)
		X[i]=v[i];
	for(int i=1;i<=cnt;i++)
		printf("%.1f ", X[i]);
}