//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//int arr[]={1,2,3,4,5};
//int size=sizeof(arr)/sizeof(int);
//for(int i=0;i<size;i++)
//{   int j=0;
//	while(j<size-1)
//	{
//		int temp=arr[j];
//		arr[j]=arr[j+1];
//		arr[j+1]=temp;
//		j++;
//	}
//	for(int j=0;j<size;j++)
//	{
//		cout<<arr[j]<<" ";
//	}
//	cout<<endl;
//}
//
//return 0;
//}






#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[]={40,13,27,87,95,40,96,71,35,79,68,2,98,3,18,93,53,57,2,81,87,42,66,90,45,20,41,30,32,18,
98,72,82,76,10,28,68,57,98,54,87,66,7,84,20,25,29,72,33,30,4,20,71,69,9,16,41,50
,97,24,19,46,47,52,22,56,80,89,65,29,42,51,94,1,35,65,25};
int d=69;
int size=sizeof(arr)/sizeof(int);
for(int i=0;i<d;i++)
{   int j=0;
	while(j<size-1)
	{
		int temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		j++;
	}

}
	for(int j=0;j<size;j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;
//cout<<size;

return 0;
}





















