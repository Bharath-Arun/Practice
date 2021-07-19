#include<stdio.h>
int main()
{
	int n, row, col, spaces;
	scanf("%d", &n);
	for(row = 1; row <= n; row++, printf("\n"))
	{
		for(col = 1; col <= n; col++)
		{
			if(row == 1 || row == n || col == 1 || col == n || row == col || row + col == n+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}	
		}
	}
	return 0;
}
