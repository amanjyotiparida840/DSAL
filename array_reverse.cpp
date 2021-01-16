//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//int arr[9]={3,4,4,5,6,6,6,7,8};
////int empty_arr[9];
//int j=0;
//for(int i=0;i<=8;i++)
//{
//	if(arr[i]!=arr[i+1])
//	{
//	arr[j]=arr[i];
//	j++;	
//	}
//	
//}
//
//for(int i=0;i<j;i++){
//    cout<<arr[i];
//    cout<<endl;
//}
//
//
//return 0;
//}




//find repeating


//
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//int arr[9]={3,4,6,6,6,6,3,4,9};
//int k,counter=0;
//
//for(int i=0;i<=7;i++)
//{
//	for(int j=i+1;j<=8;j++)
//	{
//		if(arr[i]==arr[j])
//		{
//			k= arr[i];
//			counter++;
//		}
//	}
//}
//cout<<k<<" repeated "<<counter<<" times";
//
//return 0;
//}











#include<iostream>
using namespace std;

//void printArray(int *array,int size)
//{
//	for(int i=0;i<size;i++)
//	{
//		cout<<array[i]<<" ";
//	}
//}
//
//void insertion_sort(int *array,int size)
//{
//	int key,j;
//	for(int i=1;i<size;i++)
//	{
//		key=array[i];
//		j=i-1;
//		
//		while(array[j]<key)
//		{
//			
//		}
//		
//	}
//}

int main(){
//	int array[]={2,1,6,9,4};
//	int size=sizeof(array)/sizeof(int);
//	printArray(array,size);
//	insertion_sort(array,size);
    int a[]={1,2,4,5,6};
    int n=5;
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
    {
    	total -= 9;
	}
	cout<<total;
        
    
	return 0;
}






























