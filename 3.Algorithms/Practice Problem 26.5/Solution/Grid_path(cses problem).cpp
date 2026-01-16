#include<bits/stdc++.h>
using namespace std;
const int N=1005;
#define ll long long
ll dp[N][N];
int maze[N][N];
ll mod=1e9+7;
bool Maze(int x,int y)
{
    if(maze[x][y]==-1)
    {
        return false;
    }
    return true;
}
/*int unique_paths(int n,int m)
{
    if(n==0&&m==0&&Maze(n,m))
    {
        return 1;
    }
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    int ans=0;
    if(n-1>0&&Maze(n-1,m)&&Maze(n,m))
    {
        ans+=unique_paths(n-1,m);
        ans%=mod;
    }
    if(m-1>0&&Maze(n,m-1)&&Maze(n,m))
    {
        ans+=unique_paths(n,m-1);
        ans%=mod;
    }
    dp[n][m]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            if(c=='*')
            {
                maze[i][j]=-1;
            }
        }
    }
    cout<<unique_paths(n-1,n-1)<<endl;
}*/

/////TABULATION::::


int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            if(c=='*')
            {
                maze[i][j]=-1;
            }
        }
    }
    if(n==1&&maze[n-1][n-1])
    {
        cout<<0;
        return 0;
    }
    dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0&&j==0)
            {
                continue;
            }
            if(maze[i][j]==-1)
            {
                continue;
            }
            int ans=0;
            if(i-1>=0&&Maze(i-1,j)&&Maze(i,j))
            {
                ans+=dp[i-1][j];
                ans%=mod;
            }
            if(j-1>=0&&Maze(i,j-1)&&Maze(i,j))
            {
                ans+=dp[i][j-1];
                ans%=mod;
            }
            dp[i][j]=ans;
        }
    }
    cout<<dp[n-1][n-1]<<endl;
}