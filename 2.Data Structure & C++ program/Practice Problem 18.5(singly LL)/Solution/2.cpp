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
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        /*if(index==sz-1)
        {
            node *a=head;
            node *b;
            while(a->nxt!=NULL)
            {
                b=a;
                a=a->nxt;
            }
            b=b->prv;
            b->nxt=NULL;
            delete a;
            sz--;
            return;
        }*/
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
    void Delete_max()
    {
        int c=get_max();
        vector<int>A;
        while(head!=NULL)
        {
            A.push_back(head->data);
            node *b=head;
            head=head->nxt;
            delete b;
            sz--;
        }
        for(int i=A.size()-1;i>=0;i--)
        {
            if(A[i]==c)
            {
                continue;
            }
            Insert_At_Head(A[i]);
        }
    }
    void sorting()
    {
        vector<int>A;
        while(head!=NULL)
        {
            A.push_back(head->data);
            node *b=head;
            head=head->nxt;
            delete b;
        }
        sort(A.begin(),A.end());
        for(int i=A.size()-1;i>=0;i--)
        {
            Insert_At_Head(A[i]);
        }
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
            //swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }
    void swap(int i,int j)
    {
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
        node *e;
        e=b;
        b=a;
        a=e;

    }
    void Delete_mid()
    {
        int i=sz/2;
        Delete(i);
        return;
    }
    int get_max()
    {
        int a=head->data;
        node *b=head;
        while(b!=NULL)
        {
            if(a<b->data)
            {
                a=b->data;
            }
            b=b->nxt;
        }
        return a;
    }
};
int main()
{
    int n;cin>>n;
    Doubly_Linked_List dl;
    vector<int>A;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        A.push_back(a);
    }
    for(int i=n-1;i>=0;i--)
    {
        dl.Insert_At_Head(A[i]);
    }
    //dl.Delete_mid();
    //dl.Traverse();
    //cout<<dl.get_max()<<"\n";
    //dl.Delete_max();
    dl.Traverse();
    cout<<dl.get_Size()<<"\n";
    return 0;
}
