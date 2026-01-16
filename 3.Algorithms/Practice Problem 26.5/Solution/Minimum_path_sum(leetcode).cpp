#include<bits/stdc++.h>
using namespace std;
const int N=205;
int dp[N][N];
int value[105][105];
/*int minimum_path_sum(int n,int m)
{
    if(n==0&&m==0)
    {
        return value[0][0];
    }
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    int ans1=10000,ans2=10000;
    if(n>0)
    {
        ans1=value[n][m]+minimum_path_sum(n-1,m);
    }
    if(m>0)
    {
        ans2=value[n][m]+minimum_path_sum(n,m-1);
    }
    int ans=min(ans1,ans2);
    dp[n][m]=ans;
    return ans;
}
int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>value[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    cout<<minimum_path_sum(r-1,c-1)<<endl;
}*/
/*
3 3
1 3 1
1 5 1
4 2 1
*/


///TABULATION:::::::


int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>value[i][j];
        }
    }
    dp[0][0]=value[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0&&j==0)
            {
                continue;
            }
            int ans1=1000,ans2=1000;
            if(i>0)
            {
                ans1=value[i][j]+dp[i-1][j];
            }
            if(j>0)
            {
                ans2=value[i][j]+dp[i][j-1];
            }
            dp[i][j]=min(ans1,ans2);
        }
    }
    cout<<dp[r-1][c-1]<<endl;
}