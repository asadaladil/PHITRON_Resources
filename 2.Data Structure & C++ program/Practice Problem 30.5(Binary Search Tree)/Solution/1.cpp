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
class BST
{
    public:
    node<Adil>*root;
    BST()
    {
        root=NULL;
    }
    private:
    node<Adil>*Create_new_node(Adil value)
    {
        node<Adil>*newnode=new node<Adil>;
        newnode->value=value;
        newnode->right=NULL;
        newnode->left=NULL;
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
        node<Adil>*cr=root;
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
    bool Searching(Adil value)
    {
        node<Adil>*cr=root;
        while(cr!=NULL)
        {
            if(value>cr->value)
            {
                cr=cr->right;
            }
            else if(value<cr->value)
            {
                cr=cr->left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
    void Delete(Adil value)
    {
        node<Adil>*cr=root,*pr=NULL;
        while(cr!=NULL)
        {
            if(value>cr->value)
            {
                pr=cr;
                cr=cr->right;
            }
            else if(value<cr->value)
            {
                pr=cr;
                cr=cr->left;
            }
            else
            {
                break;
            }
        }
        if(cr==NULL)
        {
            cout<<"Value is not present\n";
            return;
        }
        //node has no child
        if(cr->left==NULL&&cr->right==NULL)
        {
            if(pr->left->value==cr->value)
            {
                pr->left=NULL;
            }
            else
            {
                pr->right=NULL;
            }
            delete cr;
            return;
        }
        //node has only one child
        if(cr->left!=NULL&&cr->right==NULL)
        {
            if(pr->value<cr->left->value)
            {
                node<Adil>*a=cr->left;
                delete cr;
                pr->right=a;
            }
            else
            {
                node<Adil>*a=cr->left;
                delete cr;
                pr->left=a;
            }
            return;
        }
        if(cr->left==NULL&&cr->right!=NULL)
        {
            if(pr->value<cr->right->value)
            {
                node<Adil>*a=cr->right;
                delete cr;
                pr->right=a;
            }
            else
            {
                node<Adil>*a=cr->right;
                delete cr;
                pr->left=a;
            }
            return;
        }
        //node has 2 childs
        node<Adil>*T=cr->right;
        while(T->left!=NULL)
        {
            T=T->left;
        }
        Adil A=T->value;
        Delete(A);
        cr->value=A;
        return;
    }
    public:
    void Insertion(Adil value)
    {
        Insert(value);
    }
    void Deletion(Adil value)
    {
        Delete(value);
    }
    void Search(Adil value)
    {
        int a=Searching(value);
        a==1?cout<<"value is present\n":cout<<"Value is not present\n";
    }
};
int main()
{
    BST<int>B;
    vector<int>A={5,9,6,4,10,8,2,15,12,7};
    for(int i=0;i<A.size();i++)
    {
        B.Insertion(A[i]);
    }
    int a,b;
    cin>>a;
    B.Search(a);
    B.Deletion(a);
    B.Search(a);
    cin>>b;
    B.Search(b);
}
