#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+5;
ll dp[N];
int x;
/*ll perfect_square(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    ll ans=1e8;
    for(int i=1;i<=x;i++)
    {
        if(n>=i*i)
        {
            ans=min(ans,perfect_square(n-i*i)+1);
        }
    }
    dp[n]=ans;
    return ans;
}
int main()
{
    int num;
    cin>>num;
    x=sqrt(num);
    memset(dp,-1,sizeof(dp));
    cout<<perfect_square(num);
}*/

/////TABULATION:::::


int main()
{
    int num;
    cin>>num;
    x=sqrt(num);
    dp[0]=0;
    for(int i=1;i<=num;i++)
    {
        ll ans=100000;
        for(int j=1;j<=x;j++)
        {
            if(i>=j*j)
            {
                ans=min(ans,dp[i-j*j]+1);
            }
        }
        dp[i]=ans;
    }
    cout<<dp[num]<<endl;
}