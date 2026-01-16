#include<bits/stdc++.h>
using namespace std;
template< class Adil>
class Queue
{
public:
    int MAX=100;
    Adil A[100];
    int l,r,sz;

    Queue()
    {
        sz=0;l=0;r=-1;
    }
    void enqueue(Adil value)
    {
        if(sz==MAX)
        {
            cout<<"Queue is full";
            return;
        }
        r++;
        if(r==MAX)
        {
            r=0;
        }
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
        if(l==MAX)
        {
            l=0;
        }
        sz--;
    }
    Adil Front()
    {
        return A[l];
    }
    int size()
    {
        return sz;
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
    cout<<Q.Front()<<" ";
}
