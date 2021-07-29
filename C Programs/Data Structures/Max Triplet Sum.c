#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int findMaxSum(int *arr, int n)
{
	int i;
	int max1=INT_MIN;
	int max2=INT_MIN;
	int max3=INT_MIN;
	for(i=0;i<=n;i++)
	{
		if(arr[i]>max1)
		{
			max3=max2;
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]>max2)
		{
			max3=max2;
			max2=arr[i];
		}
		else if(arr[i]>max3)
		{
			max3=arr[i];
		}
	}
	return max1+max2+max3;
}

int main()
{
	int *arr=NULL;
	int n=0;
	int i;
	char ch;
	int maxSum;
	arr=(int *)malloc(sizeof(int));
	if(arr==NULL)
	{
		printf("Array not allocated");
		return 0;
	}
	printf("Enter the elements : ");
	while(scanf("%d%c",&arr[n],&ch)>0 && ch!='\n')
	{
		n++;
		arr=(int *)realloc(arr,(n+1)*sizeof(int));
	}
	maxSum=findMaxSum(arr,n);
	printf("The maximum sum is : %d",maxSum);
	if(arr)
	{
		free(arr);
		arr=NULL;
	}
}
