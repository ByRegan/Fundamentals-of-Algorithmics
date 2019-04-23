int LowerBound(int a[],int size,int p)
{
	int L=0;
	int R=size-1;
	int lastPos=-1;
	while(L<=R){
		int mid = L+(R-L)/2;
		if(a[mid]>=p)
			R=mid-1;
		else{
			lastPos=mid;
			L=mid+1;
		}
	}
	return lastPos;
}
