#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int h[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
    }
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        int ans1=dp[i-1]+abs(h[i]-h[i-1]);
        if(i==n)
        {
            dp[i]=ans1;
            continue;
        }
        int ans2=dp[i+1]+abs(h[i]-h[i+1]);
        dp[i]=min(ans1,ans2);
    }
    cout<< dp[n]<<endl;
}
