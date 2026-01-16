#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    int a;cin>>a;
    for(int i=0;i<a;i++)
    {
        int b;cin>>b;
        st.insert(b);
    }
    for(auto it:st)
    {
        cout<<it<<" ";
    }
}
