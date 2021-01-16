#include<iostream>
#include<vector>
using namespace std;
int main()
{
   
  int a[] = {0, 5, 5, 5, 4};
  int size= sizeof(a)/sizeof(int);
  int x=6;
  int count=0;
  for(int i=0;i<size;i++)
  {
  	if(x==a[i])
  	{
  		count++;
	  }
  }
 cout<<count; 
}

