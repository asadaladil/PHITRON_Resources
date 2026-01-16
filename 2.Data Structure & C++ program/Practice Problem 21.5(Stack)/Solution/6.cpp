#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        st.push(a);
    }
    stack<int>tmp;
    while(st.size()!=0)
    {
        tmp.push(st.top());
        st.pop();
    }
    swap(st,tmp);
    for(int i=1;i<=n;i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}