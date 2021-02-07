#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={12, 11, -13, -5, 6, -7, 5, -3, -6};
	int size=sizeof(arr)/sizeof(int);
	int j=0;
	for(int i=0;i<size;i++)
	{   
	    if(arr[i]<0)
	    {
	    	
	    	int temp=arr[i];
	    	arr[j]=temp;	
			j++;
	    	
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
