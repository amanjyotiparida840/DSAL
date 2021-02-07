#include<iostream>
#include<vector>
using namespace std;

int main()
{
int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0,1,2,0,2,1, 0, 1};
int size=sizeof(arr)/sizeof(int);
int start=0,mid=0,end=0;

for(int i=0;i<size;i++)
{
  if(arr[i]==0)
  {
  	start++;
  }
  if(arr[i]==1)
  {
  	mid++;
  }
  arr[i]=0;
}

for(int i=start;i<size;i++)
{
   arr[i]=1;
}

for(int i=start+mid;i<size;i++)
{
	arr[i]=2;
}


for(int i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}


}

