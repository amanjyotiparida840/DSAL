#include<iostream>
#include<vector>
using namespace std;


int function(int a[],int size)
{   
    int j=0;
    for(int i=0;i<size;i++)
        {
            if(a[i]!=a[i+1])
            {
               a[j++]=a[i];
            }
        }

 for(int i=0;i<j;i++)
     {
           a[i];
     }	
		
}


int main()	
{
int arr[]={1,2,3,3,4,4,5,6,7,7,8};
int size=sizeof(arr)/sizeof(int);
function(arr,size);
cout<<endl;
for(int i=0;i<size;i++)
{
cout<<arr[i]<<" ";
}


}

