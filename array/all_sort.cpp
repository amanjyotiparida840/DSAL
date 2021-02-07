#include<iostream>
#include<vector>
using namespace std;


void selection_sort(int arr[],int size)
{                                                                                                   
	for(int i=0;i<size-1;i++)
	{	
		int min=arr[i];    
		for(int j=i+1;j<size;j++)
		{
			if(min>arr[j])
			{
				int temp=min;
				arr[j]=min;
				arr[j-1]=temp;
			}
		}                    	
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void bubble_sort(int arr[],int size)
{
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}

	}
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}

void insertion_sort(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		int j=i;
		while(j>=0 && j>i)
		{
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}



int main()
{
int arr[]={5787,424456,367,2000,1987};
int size=sizeof(arr)/sizeof(arr[0]);

cout<<"Bubble_sort"<<endl;
bubble_sort(arr,size);

cout<<endl<<"Selection_sort"<<endl;
selection_sort(arr,size);

cout<<endl<<"Insertion_sort"<<endl;
insertion_sort(arr,size);


}

