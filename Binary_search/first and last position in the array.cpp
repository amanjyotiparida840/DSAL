#include<bits/stdc++.h>
using namespace std;

void binary_search_method(int arr[],int size,int element)
{   int start=0;
    int first=0,last=0;
    int end=size;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(element==arr[mid])
		{
			first=mid;
			end=mid-1;
		}
		else if(element<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	
start=0;
end=size;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(element==arr[mid])
		{
		    last=mid;
			start=mid+1;
		}
		else if(element<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<first+1<<" "<<last+1;
	
}


int main()
{
	int arr[]={1,3,4,4,4,5,6};
	int size=sizeof(arr)/sizeof(int);
	int element=4;
	binary_search_method(arr,size,element);
	return 0;
}
