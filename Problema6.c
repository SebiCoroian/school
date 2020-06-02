#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A[105],B[105], m, P,Q,cnt=1;
	scanf("%d %d %d", &m, &P, &Q);
	for(int i=1;i<=m;i++)
	{
		scanf("%d", &A[i]);
		if(A[i]>=P && A[i]<=Q)
			{
				B[cnt]=A[i];
				cnt++;
			}
	}
	for(int i=1;i<cnt;i++)
	{
		printf("%d ",B[i]);
	}
}