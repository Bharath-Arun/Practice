#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if((num%3==0) && (num%5 ==0))
	{
		printf("foobar");
	}
	else if (num%3==0)
	{
		printf("foo");
	}
	else if(num%5==0)
	{
		printf("bar");
	}
	if(num%3==0)
	{
		printf("foo");
	}
	if(num%5==0)
	{
		printf("bar");
	}
}

