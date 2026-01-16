#include<bits/stdc++.h>
using namespace std;
//memoization
#define ll long long int
const int N=1e5+5;
ll dp[N];
ll N_bonacci(int n,int k)
{
    if(n>=k)
    {
        return 1;
    }
    if(dp[k]!=-1)
    {
        return dp[k];
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=N_bonacci(n,k-i);
    }
    dp[k]=ans;
    return dp[k];
}
int main()
{
    int n,k;
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    cout<<N_bonacci(n,k)<<endl;
}