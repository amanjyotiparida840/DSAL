//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//int main()
//{
//priority_queue<int> maxheap;
//int arr[]={11,3,54,8};
//int k=2;
//int size=sizeof(arr)/sizeof(int);
//for(int i=0;i<size;i++)
//{   
//    maxheap.push(arr[i]);
//	if(maxheap.size()>k)
//	{
//		maxheap.pop();//Here we find the k'th smallest element in an array by using heap in O(nlogK)
//	}
//
//}
//cout<<maxheap.top();
//
//return 0;
//}
  




//#include<iostream>
//#include<vector>
//#include<queue>
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//priority_queue <int, vector<int>, greater<int> > minheap;
//int arr[]={11,3,54,8};
//int k=2;
//int size=sizeof(arr)/sizeof(int);
//for(int i=0;i<size;i++)
//{
//	minheap.push(arr[i]);//Here we find the k'th largest element in an array by using heap in O(nlogK)
//   if(minheap.size()>k)
//   {
//   	minheap.pop();
//   }
//     
//}
//cout<<minheap.top();
//return 0;
//}





//This program is not complete

#include<bits/stdc++.h>
using namespace std;

int main()
{   priority_queue <int, vector<int>, greater<int> > minheap;
    vector<int> vect; 
	int arr[]={3 ,4 ,24 ,26 ,44 ,41 ,86};    
	int size=sizeof(arr)/sizeof(int);
	int k=2;
	for(int i=0;i<size;i++)
	{  
		    minheap.push(arr[i]);
			if(minheap.size()>k)
			{
			 vect.push_back(minheap.top());
			 minheap.pop();
			}
			
	}

	
while(minheap.size()>0)
{   vect.push_back(minheap.top());
	minheap.pop();
}
     
	 
for (int i=0;i<vect.size();i++)
{
	cout<<vect[i]<<" ";
}	    

	return 0;
}







//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{   
//    priority_queue <pair<int,int> > maxheap;
//	int arr[]={10, 9, 8, 7, 4, 70, 60, 50};    
//	int size=sizeof(arr)/sizeof(int);
//	int k=3;
//	int closest=9;
//	for(int i=0;i<size;i++)
//	{     
//      maxheap.push({abs(arr[i]-closest),arr[i]});
//      if(maxheap.size()>k)
//      {
//      	maxheap.pop();
//	  }
//	}
//    while(maxheap.size()>0)
//    {
//    	cout<<maxheap.top().second<<" ";
//    	maxheap.pop();
//	}
//
//
//	
//	return 0;
//}



















