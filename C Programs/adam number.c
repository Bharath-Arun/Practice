#include<stdio.h>
int main()
{
	long int num, rev1 = 0, rev2 = 0, sq1, sq2;
	scanf("%ld", &num);
	sq1 = num * num;
	while(num > 0)
	{
		rev1 = rev1 *10 + (num % 10);
		num = num / 10;
	}
	sq2 = rev1 * rev1;
	while(sq2 > 0)
	{
		rev2 = rev2 *10 + (sq2 % 10);
		sq2 = sq2 / 10;
	}
	if(rev2 == sq1)
	{
		printf("Adam Number");
	}
	else
	{
		printf("Not a adam number");
	}
	return 0;
}
