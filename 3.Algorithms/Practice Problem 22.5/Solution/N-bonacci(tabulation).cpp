#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+5;
ll dp[N];
int main()
{
    int n,k;
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        dp[i]=1;
    }
    for(int i=n+1;i<=k;i++)
    {
        ll ans=0;
        for(int j=n;j>=1;j--)
        {
            ans+=dp[i-j];
        }
        dp[i]=ans;
    }
    for(int i=1;i<=k;i++)
    {
        cout<<dp[i]<<" ";
    }
}