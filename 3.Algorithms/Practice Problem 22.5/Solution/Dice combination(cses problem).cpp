#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e6+5;
ll dp[N];
const ll mod=1e9+7;
ll dice(int n)
{
    if(dp[n]!=0)
    {
        return dp[n];
    }
    for(int i=1;i<=6;i++)
    {
        if(n-i>=0)
        {
            dp[n]+=dice(n-i);
            dp[n]%=mod;
        }
    }
    return dp[n];
}
int main()
{
    int a;
    cin>>a;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=6;i++)
    {
        dp[i]=pow(2,i-1);
    }
    cout<<dice(a)<<endl;
}
