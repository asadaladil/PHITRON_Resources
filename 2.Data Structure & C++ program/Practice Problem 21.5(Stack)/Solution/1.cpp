#include<bits/stdc++.h>
using namespace std;
template<class wish>
class Stack{
public:
    int MAX=500;
    wish A[500];
    int sz;
    Stack()
    {
        sz=0;
    }
    void push(wish Value)
    {
        if(sz+1>MAX)
        {
            cout<<"Stack is Full\n";
            return;
        }
        sz++;
        A[sz-1]=Value;
    }
    void pop()
    {
        if(sz==0)
        {
            cout<<"Stack is empty\n";
            return;
        }
        wish O;
        A[sz-1]=O;
        sz--;
    }
    int top()
    {
        if(sz==0)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        return A[sz-1];
    }
};
int main()
{
    Stack<int>st;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        st.push(a);
    }
    cout<<st.top()<<" ";
    st.pop();
    cout<<st.top()<<" ";
    st.pop();
    cout<<st.top()<<" ";
}
