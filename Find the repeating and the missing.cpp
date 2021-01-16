#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[] = {3, 1, 3};
int size=sizeof(arr)/sizeof(int);

//sort

for(int i=0;i<size-1;i++)
{
	while(arr[i]>arr[i+1])
	{
		int key=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=key;
	}
}

for(int i=0;i<size;i++)
{
cout<<arr[i];
}


}

