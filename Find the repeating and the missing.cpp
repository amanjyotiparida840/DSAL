// Here is some condition for satisfying this strsartiges
//(i) array should be sorted if not ..thten we can use merge sort 
//which time complixity is O(nlogn)
//(ii)space complexity =n;

#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[] = {1,2,3,4,5,6,6,7};
int size=sizeof(arr)/sizeof(int);
bool arr1[size+1]={false};                       
int repeating=0,missing=0;

for(int i=0;i<size;i++)
{
    if(arr1[arr[i]]==true)
   {
     repeating=arr[i];
   }
   	arr1[arr[i]]=true;    
}

for(int i=1;i<=size;i++)
{
	if(arr1[i]==false)
	{
		missing=i;
		break;
	}
}

cout<<repeating<<endl;
cout<<missing;
}

