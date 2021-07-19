#include<stdio.h>
int main()
{
	long int num, count = 0;
	scanf("%ld", &num);
	while(num >0)
	{
		num = num / 10;
		count++;
	}
	printf("%ld", count);
	return 0;
}
