#include<iostream>
#include<vector>
using namespace std;
int main()
{
int a[]={60, 5, 40, 3, 2, 1};
int size=sizeof(a)/sizeof(int);
int key=0;
for(int i=0;i<size;i++)
{   
for(int j=size-1;j>i;j--)
{
	if(a[j]>a[i] && key<j-i)
	{
		key=j-i;
		
	}
}
}

cout<<key;

}

