#include<iostream>
#include<vector>
using namespace std;

void find_missing(int *array,int size)
{
	for(int i=0;i<size;i++)
    {
	if(array[i]!=i+1)
	{
		cout<<array[i]<<" duplicate"<<endl;
		cout<<i+1<<" missing";
	}
    }   
}


int main()
{
int array[]={1,2,3,1,5};
int size=sizeof(array)/sizeof(int);
find_missing(array,size);

}

