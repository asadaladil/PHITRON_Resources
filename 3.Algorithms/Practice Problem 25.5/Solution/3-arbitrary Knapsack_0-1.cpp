#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=105;
const int M=1e5+5;
ll dp[N][M],wt[N],value[M];
int x;
ll Knapsack(int n,int cap)
{
    if(cap==0)
    {
        return 0;
    }
    if(dp[n][cap]!=-1)
    {
        return dp[n][cap];
    }
    ll ans=-1;
    for(int i=0; i<x; i++)
    {
        if(cap>=wt[i+1])
        {
            ans=max(ans,value[i+1]+Knapsack(x-i,cap-wt[i+1]));
        }
    }
    dp[n][cap]=ans;
    return ans;
}
int main()
{
    int n,cap;
    cin>>n>>cap;
    memset(dp,-1,sizeof(dp));
    for(int i=1; i<=n; i++)
    {
        cin>>wt[i]>>value[i];
    }
    x=n;
    cout<<Knapsack(n,cap)<<endl;
}
/*
4 20
5 20
10 30
15 40
20 45
*/
