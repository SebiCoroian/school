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

int multiplier (int n)
{
	return ((n%10)*(n/10%10)*(n/100));
}

int main()
{
	int x;
	scanf("%d", &x);
	for(int i=100;i<=999;i++)
	{
		if(isPrime(i) && multiplier(i)==x)
			printf("%d ", i);

	}
}