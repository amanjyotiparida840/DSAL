//#include<iostream>
//#include<vector>
//using namespace std;
//
//int converter(int arr[], int size)
//{   int k=0;
//	for(int i=0;i<size;i++)
//	{
//		k=10*k+arr[i];
//	}
//	return k;
//}
//
//int main()
//{
//int arr[]={1,2,3,4,5};
//int size=sizeof(arr)/sizeof(arr[0]);
//int n=converter(arr,size);
//cout<<""<<n;
//}


//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//# define MAX 500000
//int multiplayer(int arr[],int size,int i)
//{
//	int carry=0;
//	for(int x=0;x<size;x++)
//	{
//		int product=arr[x]*i+carry;
//		arr[x]=product%10;
//		carry=product/10;
//	}
//	while(carry)
//	{
//		arr[size]=carry%10;
//		carry=carry/10;
//		size++;
//	}
//	return size;
//}
//
//int fact(int n)
//{   
//	int size=1;
//    int arr[MAX];
//	arr[0]=1;
//	
//	for(int i=2;i<=n;i++)
//	{
//		size=multiplayer(arr,size,i);
//	}
//	for (int i=size-1; i>=0; i--) 
//	{	
//	 if(i==0)
//	 {
//	 	return arr[i];
//	 }
//	 else
//	 {	
//	 	cout<<arr[i];
//	 }
//	}
//	
//}
//
//
//
//int main()
//{
//int n=5;
//cout<<fact(n);	
//}





