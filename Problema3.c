#include<stdio.h>
#include<stdlib.h>

int isPrime (int n)
{
 int flag = 1;

  for(int i = 2; i <= n/2; ++i)
  {
      if(n%i == 0)
      {
          flag = 0;
          break;
      }
  }
  return flag;
}

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
	int n,i;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		{
			if(isPrime(sumOfDigits(i))==1)
			printf("%d ", i);
		}
}