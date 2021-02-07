#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[] = {15, 16, 10, 9, 6, 7, 17};
int KthLargest=3;
int KthSmallest=3;
int size=sizeof(arr)/sizeof(int);
priority_queue <int>maxheap;
priority_queue <int,vector<int>,greater<int> > minheap;

for(int i=0;i<size;i++)
{
	maxheap.push(arr[i]);
	if(maxheap.size()>KthLargest)
	{
		maxheap.pop();
	}
}


for(int i=0;i<size;i++)
{
	minheap.push(arr[i]);
	if(minheap.size()>KthSmallest)
	{
		minheap.pop();
	}
}



cout<<maxheap.top()<<endl;
cout<<minheap.top();
return 0;
}
