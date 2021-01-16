#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[] = {4,0,2,1,3};
int size=sizeof(arr)/sizeof(int);
int j=0;
int store=0;
int temp[size];
for(int i=0;i<size;i++)
{   
    store=arr[arr[i]];
    temp[j]=store;
    j++;
}

for(int i=0;i<size;i++)
{   
    arr[i]==0;
    cout<<arr[i];
}


//for(int i=0;i<size;i++)
//{   
//    cout<<temp[i];
//}


cout<<endl;
//for(int i=0;i<size;i++)
//{
//	cout<<arr[i]<<" ";
//}
return 0;
}

