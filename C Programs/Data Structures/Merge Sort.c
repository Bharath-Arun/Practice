#include<stdio.h>
void merge(int arr[],int start,int mid,int end) // merging
{
    int len1 = mid-start+1,len2 = end-mid;  
    int left[len1],right[len2];
    int k =0 ;
    for(int i=start;i<=mid;i++)
    {
        left[k++] = arr[i];
    }
    k =0 ;
    for(int i=mid+1;i<=end;i++)
    {
        right[k++] = arr[i];
    }
    int i=0,j=0;
    k = start;
    while(i<len1 && j<len2)
    {
        if(left[i]<=right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }
    while(i<len1)
    {
        arr[k++] = left[i++];
    }
    while(j<len2)
    {
        arr[k++] = right[j++];
    }

}
void mergeSort(int arr[],int start,int end) // divide
{
    int mid = (start+end)/2;
    if(start<end)
    {
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,N-1);
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
}
