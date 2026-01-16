#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * nxt;
    node * prv;
};
class Doubly_Linked_List
{
public:
    node *head;
    int sz;
    Doubly_Linked_List()
    {
        head = NULL;
        sz = 0;
    }
    node * Create_New_Node(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    void Insert_At_Head(int data)
    {
        sz++;
        node *newnode = Create_New_Node(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            Insert_At_Head(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = Create_New_Node(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }
    void Delete(int index)
    {
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!= NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    int get_Size()
    {
        return sz;
    }
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = head;
        while(b!= NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }
    void Swap(int i,int j)
    {
        Reverse();
        if(i>sz||j>sz||i==j)
        {
            return;
        }
        node *a=head;
        node *b,*c;
        int d=0;
        while(a!=NULL)
        {
            if(d==i)
            {
                b=a;
            }
            if(d==j)
            {
                c=a;
            }
            a=a->nxt;
            d++;
        }
        int z;
        z=b->data;
        b->data=c->data;
        c->data=z;
    }
    void delete_Zero()
    {
        node *a=head;
        vector<int>A;
        int i=0;
        while(a!=NULL)
        {
            if(a->data!=0)
            {
                A.push_back(a->data);
                i++;
            }
            a=a->nxt;
        }
        if(i>0)
        {
            while(head!=NULL)
            {
                node *a=head;
                head=head->nxt;
                delete a;
                sz--;
            }
            for(int i=0;i<A.size();i++)
            {
                Insert_At_Head(A[i]);
            }
        }
        else
        {
            return;
        }
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
        a=head;
        for(int i=0;i<A.size()-2;i++)
        {
            a->data=A[i];
            a=a->nxt;
        }
        node *b=a->nxt;
        a->nxt=NULL;
        delete b;
        sz--;

    }
    int index_value(int index)
    {
        int i=0;
        node *a=head;
        while(a!=NULL)
        {
            if(i==index)
            {
                return a->data;
                break;
            }
            a=a->nxt;
            i++;
        }
    }
    void value_chaeck(int value)
    {
        node *a=head;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                cout<<"TRUE\n";
                return;
            }
            a=a->nxt;
        }
        cout<<"FALSE\n";
    }
};
int main()
{
    Doubly_Linked_List dl;
    int a;
    vector<int>A;
    for(int i=1; i<=5; i++)
    {
        cin>>a;
        A.push_back(a);
    }
    for(int i=A.size()-1; i>=0; i--)
    {
        dl.Insert_At_Head(A[i]);
    }
    cin>>a;
    dl.value_chaeck(a);
    //cout<<dl.index_value(a)<<"\n";
    //cout<<dl.get_Size()<<"\n";
    return 0;
}