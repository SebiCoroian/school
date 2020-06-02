#include<stdio.h>
#include<stdlib.h>

int NO_positives(int m[][],int x, int y)
{
	int cnt=0;
	for(int i=1,i<=x;i++)
		for(int j=1;j<=x;j++)
		{
			if(m[i][j]>0)
				cnt++;
		}
	return cnt;
}
int NO_nules(int m[][],int x, int y)
{
	int cnt=0;
	for(int i=1,i<=x;i++)
		for(int j=1;j<=x;j++)
		{
			if(m[i][j]==0)
				cnt++;
		}
	return cnt;
}
int sunPosImp(int m[][],int x, int y)
{
	int s=0;
	for(int i=1,i<=x;i++)
		for(int j=1;j<=x;j++)
		{		
				if(m[i][j]>0 && m[i][j]%2!=0)
				s=s+m[i][j];
				
		}
	return sum;
}
int avg(int m[][],int x, int y)
{
	int cnt=0,s=0;
	for(int i=1,i<=x;i++)
		for(int j=1;j<=x;j++)
		{
				s=s+m[i][j];
				cnt++;
		}
	return sum/cnt;
}
char twinLines(int m[][],int x, int y,int p, int q)
{
	for(int i=1;i<=y;i++)
		if(m[p][i]!=m[q][i])
			return n;
		return y;
}
