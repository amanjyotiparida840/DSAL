#include<iostream>
#include<vector>
using namespace std;
int main()
{

int arr[]={1,2,3,4};
int size=sizeof(arr)/sizeof(arr[0]);
int store=arr[0];

for(int i=0;i<size-1;i++)
{   	
	store=store*10+arr[i+1];
	cout<<store<<endl;
}


}

