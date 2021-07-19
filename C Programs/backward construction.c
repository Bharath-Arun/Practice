#include<stdio.h>
int main()
{
	//Backward Construction
	int a = 2345;
	int result = 0;
	int reminder;
	while(a>0)
	{
		reminder = a % 10;
		result = result * 10 + reminder;
		a = a / 10;
		
	}
	printf("\n%d", result);
	return 0;
}
