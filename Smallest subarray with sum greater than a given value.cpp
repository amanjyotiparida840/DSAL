//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//int main()
//{
//int a[]={2,6,13,10,10};
//int size=sizeof(a)/sizeof(a[0]);
//int max=20;
//int temp=0;
//int temp1=0;
//int temp2=0;
//int sum=0;
//int pum=0;
//
//for(int i=0;i<size;i++)
//{
//	if(a[i]>=max)
//	{
//		temp++;
//		break;
//	}
//}
//
//for(int i=0;i<size;i++)
//{    sum+=a[i];
//	if(sum>max)
//	{
//		temp1=i+1;
//		break;
//	}
//}
//
//for(int i=temp1-1;i>0;i--)
//{    pum+=a[i];
//	if(pum>max)
//	{
//		temp2=i;
//		break;
//	}
//}
//
//int temp3=abs(temp1-temp2);
//
//
//
//
//if(temp3>temp && temp==0)
//{
//	cout<<temp3;
//}
//else {
//	cout<<temp;
//}
//
//
//}



//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int sum=0;
//	int a[]={1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
//	int size=sizeof(a)/sizeof(int);
//	int max=280;
//	int distance=0;
//	int previous_distance=0;
//	int mn=INT_MAX;
//    for(int i=0;i<size;i++)
//    {   
//        sum=0; 
//    	for(int j=i;j<size;j++)
//    	{   
//	
//    		sum+=a[j];
//    		if(sum>max)
//    		{
//    			distance=(j+1)-i;
//    			mn=min(mn,distance);
//    			cout<<mn<<" ";
//			}	
//			
//		}
//	}
//	cout<<endl;
//	cout<<mn<<endl;
//	int sin=INT_MIN;
//	cout<<sin<<endl;
		
//	return 0;
//}


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int arr[]={1, 4, 45, 6, 0, 19};
	int max=51;
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0,i=0,j=0,minium_distance=INT_MAX;
    
    while(i<size && j<=i)
    {
    	while(sum<max && i<size)
    	{
    		sum+=arr[i];
    		i++;
		}
		while(sum>max && j<i)
		{
			minium_distance=min(minium_distance,i-j);
			sum-=arr[j];
			j++;
		   
		}
//		cout<<minium_distance<<" ";
	}
	cout<<minium_distance;
	return 0;
}






































