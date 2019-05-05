#include<stdio.h>
void swap(int * a, int * b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int arr[],int len)
{
	int i,j;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

int main()
{
	int arr[]={6,5,7,33,55,333};
	int len,i;
	len = sizeof(arr) / sizeof(*arr);
	bubble_sort(arr, len);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
