//Q-1 Array is sorted or not
//
//#include<iostream>
//using namespace std;
//bool sort(int array[],int n){
//	if(n==1){
//		return true;
//	}
//	if(array[0]<array[1] && sort(array+1,n-1))
//	{
//		return true;
//	}
//	else{
//		return false;
//	}
//}
//
//int main(){
//	int array[]={1,2,3,40,5};
//    cout<<sort(array,5)<<endl;
//	return 0;
//}


//Q-2 Print n'th number in increase and decrease way

//#include<iostream>
//using namespace std;
//
//void dec_order(int n)
//{
//	if (n==0)
//	{
//		return;
//	}
//	cout<<n<<endl;
//	dec_order(n-1);
//}
//
//
//void inc_order(int n)
//{
//	if (n==0)
//	{
//		return;
//	}
//	inc_order(n-1);
//	cout<<n<<endl;
//}
//
//int main(){
//	int n=5;
//	inc_order(n);
//    
//	return 0;
//}

//Q-3 Find first and last occurence of a number in array

//# include <iostream>
//using namespace std;
//
//int power(int a,int b)
//{
//	if(b==0){
//		return 1;
//	}
//	return a*power(a,b-1);
//}
//int main(){
//	return 0;
//}



//# include <iostream>
//using namespace std;
//
//int fun(int a)
//{
//	if(a==1){
//		cout<<a<<endl;
//		return a;
//	}
//	
//    
//	cout<<a<<endl;
//	fun(a-1);
//	return a;
//
//}
//int main(){
//	
//	cout<<fun(5)<<endl;
//	return 0;
//}



//# include <iostream>
//using namespace std;
//int iter=0;
//int fun(int a)
//{
//	if(a==1){
//
//		return 0;
//       }
//    if(a%2!=0)
//    {
//    	iter++;
//        cout<<iter<<endl;
//    }
//	return fun(a-1);
//
//}
//int main(){
//	
//	cout<<fun(10000000)<<endl;
//	return 0;
//}





//# include<iostream>
//using namespace std;
//int main()
//{
//	int k;
//	for(int i=1;i<=4;i++)
//	{
//		k=1;
//		for(int j=1;j<=7;j++)
//		{
//		
//			if(j>=5-i && j<=3+i)
//			{
//			 cout<<k;
//			 j<4?k++:k--;
//			}
//			
//			else{
//				cout<<" ";
//			}
//			
//		
//		}
//		cout<<endl;
//		
//	}
//return 0;	
//}








#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if (j>=5-i && j<=5+i)
			if (i==1)
			{
				cout<<"*";
			}
			if(i%2==0 && j%2!=0)
			cout<<"*";
			if(i%2!=0 && j%2==0)
			cout<<"+";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}














































