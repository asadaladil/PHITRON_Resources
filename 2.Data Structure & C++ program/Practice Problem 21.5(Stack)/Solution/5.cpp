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
        int t=st.top();
        st.pop();
        while(tmp.size()!=0)
        {
            if(tmp.top()>t)
            {
                break;
            }
            st.push(tmp.top());
            tmp.pop();
        }
        tmp.push(t);
    }
    swap(st,tmp);
    for(int i=1;i<=n;i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}