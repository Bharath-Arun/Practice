#include<stdio.h>
#include<string.h>
permutation(int start, int end, char *str)
{
	int i, temp;
	if(start==end)
	{
		printf("%s\n",str);
	}
	else
	{
		for(i=start;i<=end;i++)
		{
			if(str[start] != str[start+1])
			{
				temp = str[i];
				str[i]=str[start];
				str[start]=temp;
				permutation(start+1,end,str);
				temp = str[i];
				str[i]=str[start];
				str[start]=temp;
			}
			else
			{
				break;
			}
			
		}
	}
}
int main()
{
	//int n, x;
	int len;
	char str[100];	
	scanf("%s",str);
	len = strlen(str);
	permutation(0, len-1, str);
	return 0;
	
}
