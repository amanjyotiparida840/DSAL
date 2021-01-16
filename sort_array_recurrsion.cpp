#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

template <class T>

void display(vector<T> &v)
{
	cout<<"Displaying vectors";
	cout<<" ";
	for(int i=0; i<v.size();i++)
	{
		cout<<v[i]<<" "; 
	}
	
		cout<<endl;
		cout<<v.size();
}
int main(){
	vector<int> v;
	int arr[]={2,3,4,5};
	cout<<"array size"<<sizeof(arr[0])<<endl;
	
	
	int n = sizeof(arr) / sizeof(arr[0]); 
	vector<int> v1(arr,arr+n);
	

	display(v1);
	return 0; 
}
