#include<bits/stdc++.h>
using namespace std;
const int N=105;
int dp[N][N];
int value[N][N];
int n;
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
bool is_safe(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=n)
    {
        return true;
    }
    return false;
}
int longest_increasing_path(int n,int m)
{
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    int ans=1;
    for(int i=0;i<4;i++)
    {
        int x=n+dx[i];
        int y=m+dy[i];
        if(is_safe(x,y))
        {
            if(value[n][m]<value[x][y])
            {
                ans=max(ans,longest_increasing_path(x,y)+1);
            }
        }
    }
    dp[n][m]=ans;
    return ans;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>value[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    int result=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            result=max(result,longest_increasing_path(i,j));
        }
    }
    cout<<result<<endl;
}