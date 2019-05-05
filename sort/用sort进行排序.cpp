#include<iostream>
#include<algorithm> 
using namespace std;
int main()
{
	int a[]={15,4,3,9,7,2,6}; 
	sort(a,a+7);
	int i;
	for(i=0;i<7;i++)
	printf("%d ",a[i]);
	return 0;
}
