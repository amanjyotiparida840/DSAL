#include<iostream>
#include<vector>
using namespace std;

int main()
{
int array[]={0,2,100,2,0,1};
int size=sizeof(array)/sizeof(int);
int maxi=0;
int mini=10001;

for(int i=0;i<size-1;i++)
{
	if(array[i]>array[i+1])
	{
	 maxi=max(array[i],maxi);
	}
	if(array[i]<array[i+1])
	{
	 mini=min(array[i],mini);
	}

}
	cout<<maxi<<" ";
	cout<<endl;
	cout<<mini<<" ";


}

