# include<iostream>
using namespace std;

void reverse(string s)
{
	if (s.size()==0){
		return;
	}
	string temp=s.substr(1);
	reverse(temp);
	cout<<s[0];
	
}


int main()
{
    reverse("zyxw");
	return 0;
}
