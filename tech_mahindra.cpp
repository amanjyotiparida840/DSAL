#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
 int array[]={10,11,7,12,14};
 int size=sizeof(array)/sizeof(int);
 int sum=0;
 for(int i=0;i<size-1;i++)
 {
 	sum+=abs(array[i]-array[i+1]);
 }
 cout<<sum;
}

