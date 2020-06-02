#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A[105],maxEl=0,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
		if(A[i]>maxEl)
		maxEl=A[i];
	}
	printf("elementul maxim este %d si apare pe pozitiile ",maxEl);
	for(int i=1;i<=n;i++)
	{
		if(A[i]==maxEl)
			printf("%d ",i);

	}

}