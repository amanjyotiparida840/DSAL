#include<iostream>
using namespace std;

string remove_duplicate(string s)
{
	if(s.size()==1){
		return "";
	}
	
	char head=s[0];
	string rest= remove_duplicate(s.substr(1));
	if(head==rest[0])
	{
    	return rest;
	}
	return (head+rest);
}
int main(){
	cout<<remove_duplicate("aabbvvcccxffg");
	return 0;
}
