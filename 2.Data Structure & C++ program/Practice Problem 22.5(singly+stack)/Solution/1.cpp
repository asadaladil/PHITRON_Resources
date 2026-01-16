#include<bits/stdc++.h>
using namespace std;
template<class wish>
class node
{
public:
    int data;
    node * nxt;
};
template<class wish>
class Linked_List
{
private:
    void Reverse(node<wish>*a)
    {
        if(a==NULL)
        {
            return;
        }
        Reverse(a->nxt);
        cout<<a->data<<" ";
    }
public:
    node<wish> *head;
    int sz;
    Linked_List()
    {
        head = NULL;
        sz=0;
    }
    node<wish>*Create_New_Node(wish value)
    {
        node<wish>*newnode = new node<wish>;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    void Insert_At_Head(int value)
    {
        sz++;
        node<wish>*a= Create_New_Node(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }
    void Traverse()
    {
        node<wish>*a= head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    int Get_index(int value)
    {
        node<wish>*a= head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    void Search_All_Value(wish value)
    {
        node<wish>*a= head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" is found at index "<<index<<"\n";
            }
            a = a->nxt;
            index++;
        }
    }
    int get_Size()
    {
        return sz;
    }
    int get_index_value(int index)
    {
        node<wish>*a=head;
        int id=0;
        while(a!=NULL)
        {
            if(id==index)
            {
                return a->data;
            }
            a=a->nxt;
            id++;
        }
    }
    void Insert_At_Any_Index(int index, wish value)
    {
        if(index <0 || index > sz)
        {
            return;
        }
        if(index==0)
        {
            Insert_At_Head(value);
            return;
        }
        sz++;
        node<wish>*a= head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node<wish>*newnode = Create_New_Node(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    void Delete_At_Head()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node<wish>*a= head;
        head = a->nxt;
        delete a;
    }
    void Delete_Any_Index(int index)
    {
        if(index <0 || index > sz-1)
        {
            return;
        }
        if(index==0)
        {
            Delete_At_Head();
            return;
        }
        sz--;
        node<wish>*a= head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node<wish>*b= a->nxt;
        a->nxt = b->nxt;
        delete b;
    }

    void Insert_After_Value(int value , wish data)
    {
        node<wish>*a= head;
        while(a != NULL)
        {
            if(a->data == value)
            {
                break;
            }
            a = a->nxt;
        }
        if(a== NULL)
        {
            cout<<value<<" doesn't exist in linked-list.\n";
            return;
        }
        sz++;
        node<wish>*newnode = Create_New_Node(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    void print_reverse()
    {
        Reverse(head);
        cout<<"\n";
    }
    void Delete_linked_list()
    {
        while(head!=NULL)
        {
            node<wish>*a=head;
            head=head->nxt;
            delete a;
        }
    }
    void Delete_zero()
    {
        vector<int>A;
        node<wish>*a=head;
        while(a!=NULL)
        {
            if(a->data!=0)
            {
                A.push_back(a->data);
            }
            a=a->nxt;
        }
        Delete_linked_list();
        for(int i=A.size()-1;i>=0;i--)
        {
            Insert_At_Head(A[i]);
        }
    }
    int Odd_index_node_sum()
    {
        int sum=0;
        node<wish>*a=head;
        int id=0;
        while(a!=NULL)
        {
            if(id%2!=0)
            {
                sum+=a->data;
            }
            a=a->nxt;
            id++;
        }
        return sum;
    }
    bool has_duplicate()
    {
        vector<int>A;
        node<wish>*a=head;
        while(a!=NULL)
        {
            A.push_back(a->data);
            a=a->nxt;
        }
        sort(A.begin(),A.end());
        for(int i=1;i<A.size();i++)
        {
            if(A[i-1]==A[i])
            {
                return true;
            }
        }
        return false;

    }
    bool search(wish value)
    {
        node<wish>*a=head;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                return true;
            }
            a=a->nxt;
        }
        return false;
    }
    int get_Last()
    {
        node<wish>*a=head;
        while(a->nxt!=NULL)
        {
            a=a->nxt;
        }
        return a->data;
    }
    double get_Average()
    {
        node<wish>*a=head;
        double b=0;
        while(a!=NULL)
        {
            b+=(double)a->data;
            a=a->nxt;
        }
        return b/sz;
    }
};
int main()
{
    Linked_List<int>l;
    vector<int>A(5);
    for(int i=0;i<5;i++)
    {
        cin>>A[i];
    }
    for(int i=4;i>=0;i--)
    {
        l.Insert_At_Head(A[i]);
    }
    //cout<<l.get_Last()<<"\n";
    //cout<<l.get_index_value(0)<<"\n";
    //l.Delete_zero();
    //l.Traverse();
    //cout<<l.Odd_index_node_sum()<<"\n";
    //l.has_duplicate()==1?cout<<"True\n":cout<<"False\n";
    int a;cin>>a;
    //cout<<l.get_index_value(a)<<"\n";
    l.search(a)==1?cout<<"True\n":cout<<"False\n";
    return 0;
}