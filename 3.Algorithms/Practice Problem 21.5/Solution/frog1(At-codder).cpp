#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
#define ll long long int
ll dp[N];
ll h[N];
ll frog(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    ll ans1=frog(n-1)+abs(h[n]-h[n-1]);
    if(n==2)
    {
        dp[n]=ans1;
        return ans1;
    }
    ll ans2=frog(n-2)+abs(h[n]-h[n-2]);
    dp[n]=min(ans1,ans2);
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<frog(n)<<endl;
}
