//#include<iostream>
//#include<vector>
//using namespace std;
//void rotate(int a[],int size,int rotate_element)
//{
//    for(int j=0;j<rotate_element;j++)
//    {
//        for(int i=0;i<size;i++)
//        {
//               while(i<size-1)
//               {
//                   int temp=arr[i+1];
//                   arr[i+1]=arr[i];
//                   arr[i]=temp;
//                   i++;
//               }   
//        }
//    }
//    for (int j = 0; j < size; j++)
//	{
//        cout<<a[j]<<" ";
//    }
//}
//int main()
//{
//       int size,rotate_element,t;
//    	cin>>t;
//        for(int i=0;i<t;i++)
//        {
//            cin>>size;
//            cin>>rotate_element;
//            int arr[size];
//            for(int j=0;j<size;j++)
//        	    {
//        	        cin>>arr[j]; 
//        	    }
//	        rotate(arr,size,rotate_element);
//	        cout<<endl;
//        }
//        
//    return 0;
//}




//#include<bits/stdc++.h>
//using namespace std;
//void moving_array(int a[],int size,int point)
//{   
//  for(int i=0;i<point;i++)
//  {
//  	while(i<size-1)
//  	{
//  	  int temp=a[i];
//	   a[i]=a[i+1];
//	   a[i+1]=temp;	
//	}
//	int temp2=a[i+1];
//	a[i+1]=a[i];
//	a[i]=temp2;
//  }
//  
//  for(int i=0;i<size;i++)
//  {
//  	cout<<a[i];
//  }
//  
//  
//}
//int main()
//{
//	int size,time,point;
//	cin>>time;
//	for(int i=0;i<time;i++)
//	{
//		cin>>size;
//		cin>>point;
//		int a[size];
//		for(int j=0;j<size;j++)
//		{
//			cin>>a[j];
//		}
//		moving_array(a,size,point);
//		cout<<endl;
//	}
//	return 0;
//}









#include<iostream>
#include<vector>
using namespace std;
int main()
{
       int a[]={1,2,3,4,5};
       int size=5;
       int rotate_element=2;
         for(int i=0;i<rotate_element;i++)
		  {
		  	while(i<size-1)
		  	{
		  	   int temp=a[i];
			   a[i]=a[i+1];
			   a[i+1]=temp;	
			}
			int temp2=a[i+1];
			a[i+1]=a[i];
			a[i]=temp2;
		  }
	 
		for(int i=0;i<size;i++)
		{
			cout<<a[i];
		}

        
    return 0;
}















