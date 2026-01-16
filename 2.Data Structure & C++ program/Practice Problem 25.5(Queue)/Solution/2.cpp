#include<bits/stdc++.h>
using namespace std;
template< class Adil>
class Queue
{
public:
    Adil *A;
    int cap,sz,l,r;
    
    Queue()
    {
        sz=0;
        A=new Adil[1];
        cap=1;
        l=0;
        r=-1;
    }
    void increase_array()
    {
        remove_circular();
        cap*=2;
        Adil *T=new Adil[cap];
        for(int i=0;i<cap;i++)
        {
            T[i]=A[i];
        }
        swap(T,A);
        delete []T;
    }
    void remove_circular()
    {
        if(l>r)
        {
            Adil *T=new Adil[cap];
            int id=0;
            for(int i=l;i<cap;i++)
            {
                T[id]=A[i];
                id++;
            }
            for(int i=0;i<=r;i++)
            {
                T[id]=A[i];
                id++;
            }
            swap(T,A);
            l=0;
            r=cap-1;
            delete []T;
        }
    }
    void enqueue(Adil value)
    {
        if(sz==cap)
        {
            increase_array();
        }
        r++;
        A[r]=value;
        sz++;
    }
    void dequeue()
    {
        if(sz==0)
        {
            cout<<"Queue is empty";
            return;
        }
        l++;
        sz--;
    }
    int size()
    {
        return sz;
    }
    Adil Front()
    {
        return A[l];
    }
};
int main()
{
    Queue<int>Q;
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        Q.enqueue(a);
    }
    cout<<Q.Front()<<" ";
    Q.dequeue();
    cout<<Q.size()<<"\n";
    Q.dequeue();
    cout<<Q.Front()<<" ";
}