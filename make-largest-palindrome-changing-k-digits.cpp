//#include<iostream>
//#include<vector>
//using namespace std;
//
//string next_palin(string s1,int count)
//{   
//    int left=0;
//    int right=s1.size()-1;
//    while(count)
//	{
//		while(left<=right)
//		{
//			if(s1[left]!=s1[right] && s1[left]>s1[right])
//			{
//				s1[right]=s1[left];
//				left++;
//				right--;
//				break;
//			}
//			else if(s1[left]!=s1[right] && s1[right]>s1[left] )
//			{
//				s1[left]=s1[right];
//				left++;
//				right--;
//				break;
//			}
//			else if(left==right)
//			{
//				s1[left]=s1[right]='9';
//				break;
//			}
//			else
//			{
//			  left--;
//			  right++;	
//			}
//			
//		}
//		count--;
//	}
//
//    int l=0;
//    int r=s1.size()-1;
//	int counter=0;	
//	while(l<r)
//	{
//		if(s1[l]!=s1[r])
//		{
//		 counter++;
//		 l++;
//		 r--;
//		}
//		l++;
//		r--;
//	}
//	
//	if(counter>0)
//	{
//		return "-1";
//	}
//	else
//	{
//	 return s1;	
//	}
//    
//	
//}
//
//
//int main()
//{
//string s1="43435";
//int n=1;
//
//cout<<next_palin(s1,n);
//
//}
//















//
//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int string_repeatation_counter(string s1,string s2)
//{
//	int count=0;
//	int count1=0;
//	for(int i=0;i<s1.size() && i<s2.size();i++)
//	{
//		if(s1[i]==s2[i])
//		{
//			count+=2;
//		}
//		
//	}
//	
//	set<char> charset;
//	for(int i=0;i<s1.size();i++)
//	{
//		charset.insert(s1[i]);
//	}
//	set<char>:: iterator it=charset.begin();
//	set<char> charset1;
//	for(int i=0;i<s2.size();i++)
//	{
//		charset1.insert(s2[i]);
//	}
//    set<char>:: iterator it1=charset1.begin(); 
//	for(it;it!=charset.end();it++)
//	{
//		for(it1;it1!=charset1.end();it1++)
//		{
//		   	if(*it!=*it1)
//		   	{
//		   	 cout<<*it<<" "<<*it1;	
//			}
//		}
//	}
//	
//
////	cout<<count<<" "<<count1;	
//}
//int main()
// {  string s1="aaanu";
//    string s2="amanv";
//    string_repeatation_counter(s1,s2);
////    set <char> s1 ;   
////    for(int i=0;i<s.size);i++)
////    {
////    	s1.insert(s[i]);
////	}
////	set <char>:: iterator it=s1.begin(); 
////	
////	for(it;it!=s1.end();it++)
////	{
////		cout<<*it;
////	
////}	    
// 	return 0;
// }
//




























