#include <stdio.h>
#include <math.h>
int mabna10(int n, int k)
{
	int counter10=0, number=0;
	while(n!=0)
	{
		number+=(pow(k,counter10)*(n%10));
		n/=10;
		counter10++;
	}
	return number;
}
int mabnaC(int n, int k)
{
	int number=0;
	while(n!=0)
	{
		number=number*10 + n%k;
		n/=k;
	}
	return number;
}
int main()
{
	int a, b, c, w;
	scanf("%d%d%d", &a, &b,&c);
	mabnaC(mabna10(a,b), c);
}
