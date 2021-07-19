#include<stdio.h>
int main()
{
	//Seperating
	int a = 2345;
	int res;
	int num, num1;
	int rem;
	
	//Seperate 5
	printf("%d", a%10);
	printf("\n**********");
	
	//Seperate 4
	num1 = a/10;
	printf("\n%d", num1%10);
	printf("\n**********");
	
	//Backward Destruction
	while(a>0)
	{
		rem = a % 10;
		printf("\n%d", rem);
		a = a / 10;
	}
	
	
	return 0;
}
