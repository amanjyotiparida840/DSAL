#include<bits/stdc++.h>
using namespace std;

void twoSum(int arr[],int element)
{   
	int size=sizeof(arr)/sizeof(int);
	int sum=0;
	for(int i=0;i<size-1;i++)
	{ sum=0;
	  for(int j=i;j<size;j++)	
	  {
	  	  sum=arr[i]+arr[j];
	  	  cout<<sum<<" ";
//		  if(element==sum)
//		  {
//		    cout<<"d";
//		  }
//		  sum=0;
	  }
	}
}



int main()
{
	int arr[]={1,3,4,5};
	int element=8;
    twoSum(arr,element);
	
	return 0;
}
