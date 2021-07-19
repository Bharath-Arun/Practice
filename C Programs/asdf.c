#include<stdio.h>
int main()
{
	int a = 172, c;
	c = a >> 2;
	
	//128 64 32 16  8  4  2  1
//      1  0  1  0  1  1  0  0 = 20
	//  1  0  0  1  1  0  0  0 = 76
	//  0  1  1  0  0  0  0  0
 	printf("%d",c);
	return 0;
}
