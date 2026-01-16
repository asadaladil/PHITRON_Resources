#include<bits/stdc++.h>
using namespace std;
template<class Adil>
class node
{
public:
    Adil value;
    node *left;
    node *right;
};
template<class Adil>
class Binary_Tree
{
public:
    node<Adil>*root,*good;
    Binary_Tree()
    {
        root=NULL;
        good=NULL;
    }
private:
    node<Adil>*Create_new_node(Adil value)
    {
        node<Adil>*newnode=new node<Adil>;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->value=value;
        return newnode;
    }
    void Insert(Adil value)
    {
        node<Adil>*newnode=Create_new_node(value);
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
                return;
            }
            if(a->right!=NULL)
            {
                Q.push(a->right);
            }
            else
            {
                a->right=newnode;
                return;
            }
        }
    }
    void insert_BST(Adil value)
    {
        node<Adil>*newnode=Create_new_node(value);
        if(good==NULL)
        {
            good=newnode;
            return;
        }
        node<Adil>*cr=good;
        node<Adil>*pr=NULL;
        while(cr!=NULL)
        {
            if(newnode->value>cr->value)
            {
                pr=cr;
                cr=cr->right;
            }
            else
            {
                pr=cr;
                cr=cr->left;
            }
        }

        if(newnode->value<pr->value)
        {
            pr->left=newnode;
        }
        else
        {
            pr->right=newnode;
        }
    }

    int Height(node<Adil>*a)
    {
        if(a==NULL)
        {
            return 0;
        }
        int l=Height(a->left);
        int r=Height(a->right),h;
        h=l>r?l+1:r+1;
        return h;
    }
public:
    void Insertion(Adil value)
    {
        Insert(value);
        insert_BST(value);
    }
    void is_BST()
    {
        Height(root)==Height(good)?cout<<"Binary Search Tree\n":cout<<"It is not BST\n";
    }
};
int main()
{
    Binary_Tree<int>BT;
    vector<int>A= {5,9,6,4,10,8,2,15,12,7};
    for(int i=0; i<A.size(); i++)
    {
        BT.Insertion(A[i]);
    }
    BT.is_BST();
}
