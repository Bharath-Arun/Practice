#include<stdio.h>
#include<stdlib.h>
void moveAllZeros(int *arr, int n)
{
	int count=0;
	int i;
	for(i=0;i<=n;i++)
	{
		if(arr[i]!=0)
		{
			arr[count++]=arr[i];
		}
	}
	while(count<=n)
	{
		arr[count++]=0;
	}
}

int main()
{
	int *arr=NULL;
	int n=0;
	char ch;
	int i;
	arr=(int*)malloc(sizeof(int));
	if(arr==NULL)
	{
		printf("Memory allocation failed..");
		return 0;
	}
	printf("Enter elements:");
	while(scanf("%d%c",&arr[n],&ch)>0 && ch!='\n')
	{
		n++;
		arr=(int*)realloc(arr,(n+1)*sizeof(int));
	}
	moveAllZeros(arr,n);
	printf("The array after shifting are:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	if(arr)
	{
		free(arr);
		arr=NULL;
	}
}
