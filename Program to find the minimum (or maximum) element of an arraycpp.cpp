#include<iostream>
#include<vector>
using namespace std;

int main()
{
int array[]={0,2,1,2,0,1};
int size=sizeof(array)/sizeof(int);
int key=0;

for(int i=0;i<=size-1;i++)
{
	 key=array[i];
	if(array[i]>array[i+1])
	{
		array[i]=array[i+1];
		array[i+1]=key;
	
	}

}
	cout<<key<<" ";


}

