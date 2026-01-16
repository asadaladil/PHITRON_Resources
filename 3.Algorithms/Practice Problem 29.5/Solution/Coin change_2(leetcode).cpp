#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
const int M=105;
vector<int>value(N);
int dp[N];
int m;
/*int coin_change(int x,int n)
{
    if(n==0)
    {
        return 0;
    }
    if(x==0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans=0;
    for(int i=1;i<=x;i++)
    {
        ans+=coin_change(x-1,n);
        if(n-value[i]*i>=0)
        {
            ans+=coin_change(x-1,n-value[i]*i);
        }
        ans+=coin_change(x-1,n);
        
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
    int a;
    cin>>a;
    m=n;
    if(n==1)
    {
        if(n%value[1]==0)
        {
            cout<<1<<endl;
            return 0;
        }
        cout<<0<<endl;
        return 0;
        
    }
    memset(dp,-1,sizeof(dp));
    cout<<coin_change(n,a);

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
    int a;
    cin>>a;
    if(n==1)
    {
        if(n%value[1]==0)
        {
            cout<<1<<endl;
            return 0;
        }
        cout<<0<<endl;
        return 0;
        
    }
    value[0]=0;
    dp[0]=1;
    for(int i=1;i<=a;i++)
    {
        int ans=0;
        for(int j=0;j<=n;j++)
        {
            ans+=dp[i];
            if(i-value[j]*j>=0)
            {
                ans+=dp[i-value[j]*j];
            }      
        }
        dp[i]=ans;
    }
    cout<<dp[a]<<endl;

}