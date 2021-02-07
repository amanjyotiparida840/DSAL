#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str){
    
  int start=0;
  int end=str.size()-1;
  while(start<=end)
  {
      int temp=str[start];
      str[start]=str[end];
      str[end]=temp;
      start++;
      end--;
  }
  return str;
}

int main()
{
	string str="aman";
	cout<<reverseWord(str);
	return 0;
}
