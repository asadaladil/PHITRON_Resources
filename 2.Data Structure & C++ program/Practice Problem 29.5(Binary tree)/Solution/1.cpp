#include<bits/stdc++.h>
using namespace std;
template<class Adil>
class node
{
    public:
    Adil value;
    int id;
    node *parent;
    node *left;
    node *right;
};
template<class Adil>
class Binary_Tree
{
    public:
    node<Adil>*root;
    Binary_Tree()
    {
        root=NULL;
    }
    private:
    node<Adil>*Create_new_node(int id,Adil value)
    {
        node<Adil>*newnode=new node<Adil>;
        newnode->value=value;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->parent=NULL;
        newnode->id=id;
        return newnode;
    }
    void Insert(int id, Adil value)
    {
        node<Adil>*newnode=Create_new_node(id,value);
        if(root==NULL)
        {
            root=newnode;
            return;
        }
        queue<node<Adil>*>Q;
        Q.push(root);
        while(Q.size()!=0)
        {
            node<Adil>*a=Q.front();
            Q.pop();
            if(a->left!=NULL)
            {
                Q.push(a->left);
            }
            else
            {
                a->left=newnode;
                newnode->parent=a;
                return;
            }
            if(a->right!=NULL)
            {
                Q.push(a->right);
            }
            else
            {
                a->right=newnode;
                newnode->parent=a;
                return;
            }
        }
    }
    void Searching(node<Adil>*a,Adil value)
    {
        if(a==NULL)
        {
            return;
        }
        if(a->value==value)
        {
            cout<<a->id<<" ";
        }
        Searching(a->left,value);
        Searching(a->right,value);
    }
    public:
    void Insertion(int id, Adil value)
    {
        Insert(id,value);
    }
    void Search(Adil value)
    {
        Searching(root,value);
        cout<<"\n";
    }
};
int main()
{
    Binary_Tree<int>BT;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        BT.Insertion(i,i+1);
    }
    int a;
    cin>>a;
    BT.Search(a);
}