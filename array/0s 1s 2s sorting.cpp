#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int size)
{
	int l=0;
	int m=0;
	int h=size-1;
	while(m<=h)
	{
		if(arr[m]==0)
		{
			swap(arr[l],arr[m]);
			l++;
			m++;
		    
		}
		if(arr[m]==1)
		{
			m++;
		    
		}
		if(arr[m]==2)
		{
			swap(arr[m],arr[l]);
			h--;
		    
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={0,1,2,0,1,2};
	int size=sizeof(arr)/sizeof(int);
	sort(arr,size);
	return 0;
}
