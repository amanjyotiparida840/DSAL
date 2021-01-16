#include<iostream>
#include<vector>
# include<cmath>
using namespace std;
int main()
{
int a[] = {12, 4, 7, 9, 2, 23, 25, 41, 
30, 40, 28, 42, 30, 44, 48, 
43, 50} ;
int m = 7;
int size=sizeof(a)/sizeof(int);

for(int i=0;i<size-1;i++)
{
 	while(a[i]>a[i+1])
	{
		int key=a[i];
		a[i]=a[i+1];
		a[i+1]=key;
		i--;
	}
} 

for(int i=0;i<size;i++)
{
	cout<<a[i]<<" ";
}

cout<<"minuimum difference is "<<a[m-1]-a[0];

}

