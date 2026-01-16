#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=105;
const int M=1e5+5;
ll dp[N][M],nums[N];
ll Knapsack(int n,int target)
{
    if(n==0)
    {
        if(target==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(dp[n][target]!=-1)
    {
        return dp[n][target];
    }
    ll ans1=Knapsack(n-1,target);
    if(target<nums[n])
    {
        ll ans=Knapsack(n-1,target);
        dp[n][target]=ans;
        return ans;
    }
    ll ans2=Knapsack(n-1,target-nums[n]);
    
    ll ans=ans1||ans2;
    dp[n][target]=ans;
    return ans;
}
int main()
{
    int n,target;
    cin>>n>>target;
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        cin>>nums[i];
    }
    cout<<Knapsack(n,target)<<endl;
}