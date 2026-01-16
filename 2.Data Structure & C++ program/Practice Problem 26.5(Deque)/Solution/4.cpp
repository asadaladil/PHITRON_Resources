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
    int sz;int rev=0,max,min;
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
        Max_Min();
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
        Max_Min(); 
    }
    void Delete_last()
    {
        node<Adil>*a=tail;
        tail=tail->prev;
        delete a;
        tail->nxt=NULL;
        sz--;
        Max_Min();
    }
    void Delete_first()
    {
        node<Adil>*a=head;
        head=head->nxt;
        delete a;
        head->prev=NULL;
        sz--;
        Max_Min();
    }
    void Print()
    {
        if(rev==0){
        node<Adil>*a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        }
        else
        {
            node<Adil>*a=tail;
            while(a!=NULL)
            {
            cout<<a->data<<" ";
            a=a->prev;
            }
        }
        cout<<"\n";
    }
    void Max_Min()
    {
        node<Adil>*a=head;
        min=head->data;
        max=head->data;
        while(a!=NULL)
        {
            if(max<a->data)
            {
                max=a->data;
            }
            if(min>a->data)
            {
                min=a->data;
            }
            a=a->nxt;
        }
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
        if(rev==0)
        {
            return head->data;
        }
        return tail->data;
    }
    Adil back()
    {
        if(rev==0)
        {
            return tail->data;
        }
        return head->data;
    }
    int size()
    {
        return sz;
    }
    void reverse()
    {
        rev==0?rev=1:rev=0;
    }
    Adil Max()
    {
        return max;
    }
    Adil Min()
    {
        return min;
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
    dq.print();
    cout<<dq.Max()<<" "<<dq.Min()<<"\n";
    dq.pop_back();
    dq.pop_front();
    dq.print();
    cout<<dq.Max()<<" "<<dq.Min();
}