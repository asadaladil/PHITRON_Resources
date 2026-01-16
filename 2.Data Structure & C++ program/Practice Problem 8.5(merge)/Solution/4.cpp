#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;int x=0,j=1;
    vector<int>a(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    int k,m;cin>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k){cout<<"YES\n";m=1;break;}
        }
       
    }
    if(m!=1)
    {
        cout<<"NO\n";
    }

}