import java.util.*;
import java.lang.*;
import java.io.*;

class Node 
{
    int data;
    Node next;
}

 class LinkedList
{   Node head;
    public void insert(int value)
    {
        Node node =new Node();
        node.data=value;
        node.next=null;
        if(head==null)
        {
            head=node;
        }
        else
        {
            Node n=head;
            while(n.next!=null)
            {
                n=n.next;
            }
            n.next=node;
        }
    }
    
    public void insertAtFirst(int value)
    {
        Node node =new Node();
        node.data=value;
        node.next=null;
        if(head==null)
        {
            head=node;
        }
        else
        {
            node.next=head;
            head=node;
        }
    } 
    public void insertAtIndex(int index,int value) 
    {
        Node node =new Node();
        node.data=value;
        if(head==null)
        {
            head=node;
        }
        else
        {   Node n=head;
            int count=1;
            while(index != count)
            {
                n=n.next; 
                count++;
            }
            node.next=n.next;
            n.next=node;
        }
        
    }
     void show()
    {
        Node n=head;
        while(n.next!=null)
        {
            System.out.println(n.data);
            n=n.next;
        }
        System.out.println(n.data);
    }
    
    void showTop()
    {
        System.out.println(head.data);
    }
    void showLast()
    {   Node n=head;
        while(n.next!=null)
        {
            n=n.next;
        }
        System.out.println(n.data);
    }
    void size()
    {   
        Node n=head;
        int count=1;
        while(n.next!=null)
        {
            count++;
            n=n.next;
        }
        System.out.println(count);
    }

    
}




class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		LinkedList obj=new LinkedList();
		obj.insertAtFirst(5);
		obj.insert(45);
		obj.insertAtIndex(2,3);
		obj.insertAtIndex(1,7);
		obj.showTop();
		obj.size();
		obj.showLast();
		
		obj.show();
	}
}