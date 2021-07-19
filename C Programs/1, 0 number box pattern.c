#include<stdio.h>
int main()
{
	int row, col, n;
	scanf("%d", &n);
	for(row = 1; row <= n; row++, printf("\n"))
	{
		for(col = 1; col <= n; col++)
		{
			if(row == 1 || row == n || col == 1 || col == n)
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
