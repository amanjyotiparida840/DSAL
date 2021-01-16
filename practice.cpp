#include<iostream>
#include<vector>
using namespace std;
int main()
{
int a[6]={5,5,5,5,5};
int size =sizeof(a)/sizeof(int);
int i,j,k=0;

cout<<size<<endl;

for(i=0;i<size;i++){
	
	if(a[i]!=a[i+1])
	{
		a[k++]=a[i];
	}
	
}
for(i=0;i<k;i++){
cout<<a[i];
}

return 0;
}

