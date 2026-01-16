#include<bits/stdc++.h>
using namespace std;
template<class Adil>
class node
{
    public:
    Adil data;
    node *nxt;
};
template<class Adil>
class Queue
{
    public:
    node<Adil>*head,*tail;
    int sz;
    Queue()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }
    node<Adil>*Create_new_node(Adil value)
    {
        node<Adil>*newnode= new node<Adil>;
        newnode->nxt=NULL;
        newnode->data=value;
        return newnode;
    }
    void enqueue(Adil value)
    {
        node<Adil>*newnode=Create_new_node(value);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            sz++;
            return;
        }
        tail->nxt=newnode;
        tail=newnode;
        sz++;
    }
    void dequeue()
    {
        if(sz==0)
        {
            return;
        }
        if(sz==1)
        {
            delete head;
            head=NULL;tail=NULL;sz=0;
        }
        node<Adil>*a=head;
        head=head->nxt;
        delete a;
        sz--;
    }
    Adil Front()
    {
        return head->data;
    }
    int size()
    {
        return sz;
    }
    Adil Back()
    {
        return tail->data;
    }
};
int main()
{
    Queue<int>Q;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        Q.enqueue(a);
    }
    cout<<Q.Front()<<" ";
    Q.dequeue();
    cout<<Q.size()<<"\n";
    cout<<Q.Front()<<" ";
}

