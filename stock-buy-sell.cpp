#include <bits/stdc++.h>
using namespace std;
int main()
{

	int price[] = { 4,3,2,1,5 };
	int size = sizeof(price) / sizeof(int);
    int profit=0;
	for(int i=1;i<size;i++)
	{
		if(price[i]>price[i-1])
		{
			profit+=price[i]-price[i-1];
//			cout<<profit<<" "<<endl;
		}
	}
	cout<<profit;

	return 0;
}

