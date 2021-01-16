#include<iostream>
#include<vector>
using namespace std;

int main()
{
int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
int size=sizeof(arr)/sizeof(int);
int k=3;
for(int i=0;i<size-1;i++)
{
	while(i>=0 && arr[i]>arr[i+1])
	{
		int key=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=key;
		i--;
	}
}


for(int i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}






}

