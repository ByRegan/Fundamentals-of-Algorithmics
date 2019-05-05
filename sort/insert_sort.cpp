#include<stdio.h>
int swap(int *a,int*b)
{
	int t; 
	t=*a;
	*a=*b;
	*b=t;
}
void insert_sort(int arr[],int len)
{
	int i,j;
	for(i=1;i<len;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]>arr[i])
			{
				swap(&arr[j],&arr[i]);
			}
		}
	}
}

int main()
{
	int arr[]={
		100,99,8888,-3
	};
	int len,i;
	len = sizeof(arr) / sizeof(*arr);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
