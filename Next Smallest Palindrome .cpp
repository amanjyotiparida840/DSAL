#include<iostream>
#include<vector>
//#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

int main()
{
int flag=true,duplicate=0,reminder;
long long n=0;
long long original=9737694;
while(original!=duplicate)
{   
    n=original;
//    cout<<original<<" "<<duplicate<<endl;
    
	while(n!=0)
	{
	    reminder=n%10;
		duplicate=duplicate*10+reminder;
		n/=10;
	}
	if(original==duplicate)
	{
		cout<<original;
		cout<<" ";
		cout<<duplicate;
//		flag=false;	
        break;	
	}
	duplicate=0;
	original++;
}

}




















//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//int flag=0,duplicate=0,reminder;
//int original=121;
//int n=121;
//	while(n!=0)
//	{
//	    reminder=n%10;
//	    duplicate=duplicate*10+reminder;
//		n/=10;
//	}
//	if(original==duplicate)
//	{
//		cout<<original;
//		cout<<endl;
//		cout<<duplicate;
//	}
//}











