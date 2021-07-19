#include<stdio.h>
int main()
{
	int row, col, n;
	scanf("%d", &n);
	for(row = 1; row <= n; row++, printf("\n"))
	{
		for(col = 1; col <= n; col++)
		{
			if(row == n/2 + 1 || col == n/2 + 1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
	return 0;
}
