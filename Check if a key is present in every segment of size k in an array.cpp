#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
int main()
{
int arr[] = { 5, 8, 7, 12, 14, 3, 9};
int available = 8;
float segement = 2;
float size=sizeof(arr)/sizeof(int);
cout<<size<<endl;

int count=0;

for(int i=0;i<ceil(size/segement);i++)
{  int k=i*segement,a=(i+1)*segement;
   while(k<a)
   {
   	if(available==arr[k])
   	{
   	  count++;	
	}
   	k++;
   }
  
}

cout<<count<<endl;
cout<<ceil(size/segement);

}


