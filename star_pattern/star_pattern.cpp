//#include<iostream>
//using namespace std;
//int main()
//{
//	int k=0;
//	for(int i=1;i<=9;i++)
//	{    k++;
//		for(int j=1;j<=i;j++)
//		{   
//			cout<<k<<" ";
//			
//		}
//		cout<<endl;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	for(int i=1;i<=9;i++)
//	{    
//		for(int j=i;j<=9;j++)
//		{   
//			cout<<"*"<<" ";
//			
//		}
//		cout<<endl;
//	}
//	return 0;
//}







#include<iostream>
using namespace std;
int main()
{
	
	for(int i=1;i<=9;i++)
	{    
		for(int j=1;j<=i;j++)
		{   
			cout<<"*"<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}




























# include<iostream>
using namespace std;
int main()
{
	int k;
	for(int i=1;i<=4;i++)
	{
		k=1;
		for(int j=1;j<=7;j++)
		{
		
			if(j>=5-i && j<=3+i)
			{
			 cout<<k;
			 j<4?k++:k--;
			}
			
			else{
				cout<<" ";
			}
			
		
		}
		cout<<endl;
		
	}
return 0;	
}
