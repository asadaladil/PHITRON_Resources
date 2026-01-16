#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
};
class Linked_List
{
public:
    node *head;
    Linked_List()
    {
        head=NULL;
    }
    node *Create_New_Node(int value)
    {
        node *newnode=new node;
        newnode->data=value;
        newnode ->nxt=NULL;
    }
    void Insert_At_Head(int value)
    {
        node *a=Create_New_Node(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        else
        {
            a->nxt=head; head=a;
        }
    }
    void Traverse()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    int get_Size()
    {
         node *a=head;
        int id=0;
        while(a!=NULL)
        {
            id++;
            a=a->nxt;
        }
        return id;
    }
    int get_Value(int value)
    {
        node *a=head;
        int id=0;
        while(a!=NULL)
        {
            if(a->data==value){return id;}
            a=a->nxt;id++;
        }
        return -1;
    }
    node *a=head;
    void print_Reverse()
    {
        Reverse(head);
        cout<<"\n";
    }
    void swap_First()
    {
        node *a=head;
        int z=a->data;
        node *b=a->nxt;
        a->data=b->data;
        b->data=z;
    }
    void Delete_head()
    {
        node *a=head;
        head=a->nxt;
        delete a;
    }
    int print_Any_index(int index)
    {
        node *a=head;
        int i=1;
        if(index==0)
        {
            return a->data;
        }
        a=a->nxt;
        while(a!=NULL)
        {
            if(i==index)
            {
                break;
            }
            a=a->nxt;
            i++;
        }
        return a->data;
    }
    void insert_back(int b)
    {
        node *a=head;
        node *c=head;
        while(a!=NULL)
        {
            c=a;
            a=a->nxt;
        }
        node *newnode=Create_New_Node(b);
        c->nxt=newnode;
        newnode->nxt=NULL;
    }
    private:
    void Reverse(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        Reverse(a->nxt);
        cout<<a->data<<" ";
    }
};
int main()
{
    Linked_List l;
    int a;
    for(int i=1;i<=5;i++)
    {
        cin>>a;
        l.Insert_At_Head(a);
    }
    l.Traverse();
    cin>>a;
    l.insert_back(a);
    l.Traverse();
    //cout<<l.print_Any_index(2)<<"\n";

}
