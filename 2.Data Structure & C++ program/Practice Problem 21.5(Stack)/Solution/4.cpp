#include<bits/stdc++.h>
using namespace std;
template< class wish>
class Stack
{
public:
    wish *a;
    int sz;
    int cap;
    Stack()
    {
        a=new wish[1];
        cap=1;sz=0;
    }
    void increase_size()
    {
        wish *tmp;
        cap*=2;
        tmp=new wish[cap];
        for(int i=0;i<cap;i++)
        {
            tmp[i]=a[i];
        }
        swap(tmp,a);
        delete []tmp;
    }
    void decrease_size()
    {
        wish *tmp;
        cap/=2;
        tmp=new wish[cap];
        for(int i=0;i<cap;i++)
        {
            tmp[i]=a[i];
        }
        swap(tmp,a);
        delete []tmp;
    }
    void Push(wish value)
    {
        if(sz+1>cap)
        {
            increase_size();
        }
        sz++;
        a[sz-1]=value;
    }
    void Pop()
    {
        if(sz==0)
        {
            return;
        }
        sz--;
        if(cap/2>sz)
        {
            decrease_size();
        }
    }
    wish top()
    {
        if(sz==0)
        {
            wish a;
            return a;
        }
        return a[sz-1];
        
    }
};
int main()
{
    Stack<char>st;
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        char a;cin>>a;
        st.Push(a);
    }
    cout<<st.top()<<" ";
    st.Pop();
    cout<<st.top()<<" ";
    st.Pop();
    cout<<st.top()<<" ";
    st.Pop();
    cout<<st.top()<<" ";
    return 0;
}