#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
	    node* next;
	node(int value)
	{
		data=value;
		next=NULL;
	}
};

void insert(node* &head,int val)
{
	node* n=new node(val);
	if(head==NULL)
	{
		return;
	}
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{   
    node* head=NULL;
    insert(head,10);
    insert(head,100);
    display(head);
    return 0;
}
