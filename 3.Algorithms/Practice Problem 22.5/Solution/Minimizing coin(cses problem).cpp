#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e6+5;
const ll INF=1e10;
ll dp[N];
vector<ll>coin;
int x;
ll min_coin(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    ll ans=INF;
    for(int i=0;i<x;i++)
    {
        if(n-coin[i]>=0)
        {
            ans=min(ans,min_coin(n-coin[i])+1);
        }
    }
    dp[n]=ans;
    return dp[n];
}
int main()
{
    int a;
    cin>>x>>a;
    coin.resize(x+1);
    for(int i=0;i<x;i++)
    {
        cin>>coin[i];
    }
    ll ans=min_coin(a);
    ans!=INF?cout<<ans:cout<<-1;
}
