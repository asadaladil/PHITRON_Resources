#include<bits/stdc++.h>
using namespace std;
template<class Adil>
class node
{
    public:
    Adil data;
    node *nxt;
    node *prev;
};
template<class Adil>
class Deque
{
    public:
    node<Adil>*head,*tail;
    int sz;
    Deque()
    {
        sz=0;
        head=NULL;
        tail=NULL;
    }
    private:
    node<Adil>*Create_new_node(Adil value)
    {
        node<Adil>*newnode=new node<Adil>;
        newnode->data=value;
        newnode->nxt=NULL;
        newnode->prev=NULL;
        return newnode;
    }
    void Insert_at_head(Adil value)
    {
        node<Adil>*newnode=Create_new_node(value);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            sz++;
            return;
        }
        head->prev=newnode;
        newnode->nxt=head;
        head=newnode;
        sz++;
    }
    void Insert_at_tail(Adil value)
    {
        node<Adil>*newnode=Create_new_node(value);
        if(tail==NULL)
        {
            head=newnode;
            tail=newnode;
            sz++;
            return;
        }
        tail->nxt=newnode;
        newnode->prev=tail;
        tail=newnode;
        sz++;  
    }
    void Delete_last()
    {
        node<Adil>*a=tail;
        tail=tail->prev;
        delete a;
        tail->nxt=NULL;
        sz--;
    }
    void Delete_first()
    {
        node<Adil>*a=head;
        head=head->nxt;
        delete a;
        head->prev=NULL;
        sz--;
    }
    void Print()
    {
        node<Adil>*a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    public:
    void print()
    {
        Print();
    }
    void push_back(Adil value)
    {
        Insert_at_tail(value);
    }
    void push_front(Adil value)
    {
        Insert_at_head(value);
    }
    void pop_back()
    {
        Delete_last();
    }
    void pop_front()
    {
        Delete_first();
    }
    Adil front()
    {
        return head->data;
    }
    Adil back()
    {
        return tail->data;
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    Deque<int>dq;
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        dq.push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        dq.push_front(a);
    }
    cout<<dq.back()<<" "<<dq.front()<<"\n";
    cout<<dq.size()<<"\n";
    dq.pop_back();
    cout<<dq.size()<<"\n";
    dq.pop_front();
    cout<<dq.size()<<"\n";
    dq.print();
    cout<<dq.back()<<" "<<dq.front()<<"\n";
}