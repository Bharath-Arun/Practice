#include<stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	int n;
	scanf("%d",&n);
	while(i<= n)
	{
		if(n % i == 0)
		{
			sum += 1;
		}
		i++;
	}
	printf("%d", sum+n);
	return 0;
}
