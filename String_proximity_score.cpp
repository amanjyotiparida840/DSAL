#include<iostream>
//#include<vector>
using namespace std;
int main()
{
string s1="Ryaan";
string s2="Nagesh";
int count=0;
for(int i=0;i<s1.length() && i<s2.length();i++)
{
	if(s1[i]==s2[i])
		{
			count+=2;
			cout<<s1[i]<<" "<<endl;
			cout<<s2[i]<<" ";
		}+-
		
}
cout<<count;
   
		return 0;
}

