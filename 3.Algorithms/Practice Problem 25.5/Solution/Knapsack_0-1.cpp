#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=105;
const int M=1e5+5;
ll dp[N][M],wt[N],value[M];
ll Knapsack(int n,int cap)
{
    if(n==0)
    {
        return 0;
    }
    if(dp[n][cap]!=-1)
    {
        return dp[n][cap];
    }
    if(cap<wt[n])
    {
        ll ans=Knapsack(n-1,cap);
        dp[n][cap]=ans;
        return ans;
    }
    ll ans1=value[n]+Knapsack(n-1,cap-wt[n]);
    ll ans2=Knapsack(n-1,cap);
    ll ans=max(ans1,ans2);
    dp[n][cap]=ans;
    return ans;
}
int main()
{
    int n,cap;
    cin>>n>>cap;
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        cin>>wt[i]>>value[i];
    }
    cout<<Knapsack(n,cap)<<endl;
}