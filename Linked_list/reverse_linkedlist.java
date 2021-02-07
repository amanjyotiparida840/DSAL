import java.util.*;
import java.lang.*;
import java.io.*;

class Node 
{
 int data;
 Node next;
 Node prev;
}


class LinkedList
{   Node head;
    Node tail;
    void insert(int data)
    {
        Node node =new Node();
        node.data=data;
        node.next=null;
        if (head==null)
        {
            head=node;
            node.prev=head;
        }
        else
        { 
        Node n=head;
        while(n.next!=null)
        {
            n=n.next;
        }
        n.next=node;
        node.prev=n;
        tail=node;
        }
        
    }
 Node deleteFirastNode()
    {
       Node n=head;
       head=head.next;
       n.next=null;
       return head;
        
    }
    void deletelastnode()
    {
        Node n=head;
        Node prev=null;
        while(n.next!=null)
        {
            prev=n;
            n=n.next;
            
        }
        prev.next=null;
    }





    void show()
    {
        while(head.next!=null)
        {
          System.out.println(head.data);
          head=head.next;
        }
        System.out.println(head.data);
    }
    void showReverse()
    {
       while(tail!=head)
       {
           System.out.println(tail.data);
           tail=tail.prev;
       }
       System.out.println(tail.data);
       
    }
  
}


class reverse_linkedlist
{
	public static void main (String[] args) throws java.lang.Exception
	{
		LinkedList obj=new LinkedList();
		obj.insert(2);
		obj.insert(20);
		obj.insert(299);
		obj.insert(789);
		obj.show();
		obj.showReverse();
		
	}
}
