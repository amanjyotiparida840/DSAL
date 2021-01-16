# include<iostream>
using namespace std;

void ToH(int n, string source,string helper,string destination)
{
	if (n==0)
	{
		return;
	}
	ToH(n-1,source,helper,destination);
	cout<<"Move from "<<source<<" to "<<destination<<endl;
	ToH(n-1,source,destination,helper);
	
}


int main()
{
    ToH(64,"source","helper","destination");
	return 0;
}
