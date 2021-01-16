#include<iostream>
#include<vector>
using namespace std;

void linear_search(int array[],int size,int element){
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
    for(int i=0;i<=size-1;i++) 
	    {
        if (element==array[i]){
        	cout<<element<<" found in "<<i+1<<"'th position";
            flag=true;
		}  
		}

    if(flag==false){
    	cout<<"404 Not found";
	}
	
		
}


int main(){
	int array[]={2,3,4,5};
    int element=47;
    int size=sizeof(array)/sizeof(int);
    linear_search(array,size,element);
    
	return 0;
}
