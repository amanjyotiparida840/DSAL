#include<iostream>
#include<vector>
using namespace std;
int main()
{
int a[]={60, 500, 40, 3, 2, 1};
int size=sizeof(a)/sizeof(int);
int key=-3333;
for(int i=0;i<size-1;i++)
{   
   if(a[i]>a[i+1])
   {
   	key=max(key,a[i]);
   }
}
int index=0;
for(int i=0;i<size;i++)
{
	if(key==a[i])
	{
		index=i;
		break;
	}
}
cout<<index;
cout<<key;

}























