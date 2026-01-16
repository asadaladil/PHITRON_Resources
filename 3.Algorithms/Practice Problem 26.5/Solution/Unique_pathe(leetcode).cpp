#include<bits/stdc++.h>
using namespace std;
const int N=105;
int dp[N][N];
/*int unique_paths(int n,int m)
{
    if(n==0&&m==0)
    {
        return 1;
    }
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    int ans=0;
    if(n>0)
    {
        ans+=unique_paths(n-1,m);
    }
    if(m>0)
    {
        ans+=unique_paths(n,m-1);
    }
    dp[n][m]=ans;
    return ans;
}
int main()
{
    int r,c;
    cin>>r>>c;
    memset(dp,-1,sizeof(dp));
    cout<<unique_paths(r-1,c-1)<<endl;
}*/

///TABUALTION::::

int main()
{
    int r,c;
    cin>>r>>c;
    dp[0][0]=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0&&j==0)
            {
                continue;;
            }
            int ans=0;
            if(i>0)
            {
                ans+=dp[i-1][j];
            }
            if(j>0)
            {
                ans+=dp[i][j-1];
            }
            dp[i][j]=ans;
        }
    }
    cout<<dp[r-1][c-1]<<endl;
}