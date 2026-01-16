#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>c;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];c.push_back(a[i]);
    }
    int m;cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];c.push_back(b[i]);
    }
    sort(c.begin(),c.end());
    for(int i=(c.size()-1);i>=0;i--){cout<<c[i]<<" ";}

}