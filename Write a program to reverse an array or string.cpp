#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[] = {1, 3,5};
int size=sizeof(arr)/sizeof(int);



int start=0;
int end=size-1;

for(int i=0;i<size;i++)
{
	
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}



for(int k=0;k<size;k++)
{
	cout<<arr[k]<<" ";
}

return 0;
}

