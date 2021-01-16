#include<iostream>
using namespace std;

void func(string s){
	if (s.size()==0)
	{
		return;
	}
	if(s[0]=='p' && s[1]=='i')
	{
		cout<<"3.141";
		string temp=s.substr(2);
		return func(temp);
	}
	else{
		cout<<s[0];
		return func(s.substr(1));
	}
}
main(){
	
	func("pipoppipnkjpitypiipipipi");
}
