#include<iostream>
#include<vector>
using namespace std;
int main()
{

int a[] = {15, 16, 10, 9, 6, 7, 17};
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

float min=a[0];
float max=a[size-1];
cout<<"range: "<<max-min<<endl;
cout<<"coefficient range: "<<(max-min)/(max+min);
}

