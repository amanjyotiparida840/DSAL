#include<iostream>
#include<vector>
using namespace std;

void binary_search(int array[],int size,int element){
	bool flag;
	cout<<"Elements given: ";
	for(int i=0;i<=size-1;i++) 
	    {
        
	        if (i==size-1)
			{
	        	cout<<array[i];
			}
			else
			{
			cout<<array[i]<<",";
	     	}
		}	
    cout<<endl;
    
int mid,low,high;
low=0;
high=size-1;


while(low<=high){
	mid=(low+high)/2;
if(array[mid]==element)
{
	cout<<element<<" found in "<<mid+1<<"'th position";
	flag=true;
}
if(array[mid]<element)
{
	low=mid+1;
}
else
{
	high=mid-1;
}
}






    if(flag==false){
    	cout<<"404 Not found";
	}
	
		
}


int main(){
	int array[]={2,3,4,5};
    int element=4;
    int size=sizeof(array)/sizeof(int);
    binary_search(array,size,element);
    
	return 0;
}
