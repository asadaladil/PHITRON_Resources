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
    int sz;
    Linked_List()
    {
        head=NULL;
        sz=0;
    }
    node *Create_New_Node(int value)
    {
        node *newnode=new node;
        newnode->data=value;
        newnode ->nxt=NULL;
    }
    void Insert_At_Head(int value)
    {
        sz++;
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
        return sz;
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
        sz--;
    }
    void Delete_last()
    {
        node *a=head;
        vector<int>A;
        while(a!=NULL)
        {
            A.push_back(a->data);
            a=a->nxt;
        }
        int m=0;
        a=head;
        for(int i=0;i<A.size()-2;i++)
        {
            a->data=A[m];
            a=a->nxt;
            m++;
        }
        a->nxt=NULL;
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
    l.Delete_last();
    l.Traverse();

}
