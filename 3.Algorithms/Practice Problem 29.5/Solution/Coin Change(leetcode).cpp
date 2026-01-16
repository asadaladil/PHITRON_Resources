#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int value[N],dp[N];
int x;
/*int coin_change(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans=1e8;
    for(int i=1;i<=x;i++)
    {
        if(n-value[i]>=0)
        {
            ans=min(ans,coin_change(n-value[i])+1);
        }
    }
    dp[n]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>value[i];
    }
    memset(dp,-1,sizeof(dp));
    int a;
    cin>>a;
    x=n;
    cout<<coin_change(a);

}*/


///TABULATION:::::

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>value[i];
    }
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int ans=1e8;
        for(int j=1;j<=n;j++)
        {
            if(i-value[j]>=0)
            {
                ans=min(ans,dp[i-value[j]]+1);
            }
        }
        dp[i]=ans;
    }
    cout<<dp[a]<<endl;

}