#include<iostream>
using namespace std;

int fib(int n){
	if(n==1 || n==0){
		return n;
	}
	if(n==-1)
	{
		return 0;
	}
    return fib(n-1) + fib(n-2) + fib(n-3);
    
}
int main(){

	cout<<fib(25);
	return 0;
}
