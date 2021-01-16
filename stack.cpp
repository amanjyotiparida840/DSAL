//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int arr[]={1,4,2,5};
//	int size=sizeof(arr)/sizeof(int);
//	stack <int> stack;
//	vector <int> v1;
//	for(int i=size-1;i>=0;i--)
//	{
//	  	if(stack.empty())
//	  	{
//	  		v1.push_back(-1);
//	    }
//	    else if(stack.size()>0 && stack.top()>arr[i])
//	    {
//	    	v1.push_back(stack.top());
//		}
//		else if(stack.size()>0 && stack.top()<arr[i])
//		{
//			while(stack.size()>0 && stack.top()<=arr[i])
//			{
//				stack.pop();
//			}
//			if(stack.size()==0)
//			{
//				v1.push_back(-1);
//			}
//			else
//			{
//				v1.push_back(stack.top());
//			}
//		}
//	    stack.push(arr[i]);
//	}
//    reverse(v1.begin(),v1.end());
//    for(int i=0;i<v1.size();i++)
//    {
//    	cout<<v1[i]<<" ";
//	}
//    
//}












//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int arr[]={1,4,2,5};
//	int size=sizeof(arr)/sizeof(int);
//	stack <int> stack;
//	vector <int> v1;
//	for(int i=0;i<size;i++)
//	{
//	  	if(stack.empty())
//	  	{
//	  		v1.push_back(-1);
//	    }
//	    else if(stack.size()>0 && stack.top()<arr[i])
//	    {
//	    	v1.push_back(stack.top());
//		}
//		else if(stack.size()>0 && stack.top()>arr[i])
//		{
//			while(stack.size()>0 && stack.top()>=arr[i])
//			{
//				stack.pop();
//			}
//			if(stack.size()==0)
//			{
//				v1.push_back(-1);
//			}
//			else
//			{
//				v1.push_back(stack.top());
//			}
//		}
//	    stack.push(arr[i]);
//	}
////    reverse(v1.begin(),v1.end());
//    for(int i=0;i<v1.size();i++)
//    {
//    	cout<<v1[i]<<" ";
//	}
//    
//}















