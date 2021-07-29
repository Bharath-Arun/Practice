#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void findMaxFreq(char *str, int n, int *max_freq, char *max_char, int *min_freq, char *min_char)
{
	int i;
	int alpha[26]={0};
	for(i=0;i<n;i++)
	{
		alpha[str[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(alpha[i]!=0)
		{
			if(alpha[i]>*max_freq)
			{
				*max_freq=alpha[i];
				*max_char=i+'a';
			}
			if(alpha[i]<*min_freq)
			{
				*min_freq=alpha[i];
				*min_char=i+'a';
			}
		}
	}
}

int main()
{
	char *str=NULL;
	int n=0;
	int i;
	int max_freq=INT_MIN;
	int min_freq=INT_MAX;
	char max_char, min_char;
	str=(char *)malloc(sizeof(char));
	if(str==NULL)
	{
		printf("String allocation failed");
		return 0;
	}
	printf("Enter the string : ");
	while(scanf("%c",&str[n])>0 && str[n]!='\n')
	{
		n++;
		str=(char *)realloc(str,(n+1)*sizeof(char));
	}
	str[n]='\0';
	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
	}
	findMaxFreq(str, n, &max_freq, &max_char, &min_freq, &min_char);
	printf("\n%c %d",max_char,max_freq);
	printf("\n%c %d",min_char,min_freq);
	if(str)
	{
		free(str);
		str=NULL;
	}
	return 0;
}
