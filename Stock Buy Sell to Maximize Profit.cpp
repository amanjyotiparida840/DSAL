#include<iostream>
#include<vector>
using namespace std;
int main()
{
int a[]={4,3,2,1,5};
int size=sizeof(a)/sizeof(int);
int key=0;
for(int i=0;i<size-1;i++)
{
	if(a[i]<a[i+1] && key<1)
	{
		cout<<"Buy stock on "<<a[i]<<endl;
        cout<<"Buy stock on day "<<i<<endl;
		cout<<endl;
		key++;
	}
	else if(a[i]>a[i+1])
	{
//		cout<<"Sell stock on "<<a[i]<<endl;
//		cout<<"Sell stock on day "<<i<<endl;
//		cout<<endl;
//		cout<<"Buy stock on "<<a[i+1]<<endl;
//		cout<<"Buy stock on day "<<i+1<<endl;
	    cout<<endl;
//	    key--;	
	}
	else if (a[i]<a[i+1] && a[i+1]==a[size-1])
	{
		cout<<"Sell stock on "<<a[i+1]<<endl;
        cout<<"Sell stock on day "<<i+1;
	}
}

}

