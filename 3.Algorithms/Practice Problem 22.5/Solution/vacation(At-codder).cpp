#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int happiness[N][4],dp[N][4];
int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>happiness[i][j];
        }
    }
    for(int task=1;task<=3;task++)
    {
        dp[1][task]=happiness[1][task];
    }
    for(int day=1;day<=n;day++)
    {
        for(int cur_task=1;cur_task<=3;cur_task++)
        {
            int max_profit=0;
            for(int last_task=1;last_task<=3;last_task++)
            {
                if(cur_task==last_task)
                {
                    continue;;
                }
                int cur_profit=dp[day-1][last_task]+happiness[day][cur_task];
                max_profit=max(max_profit,cur_profit);
            }
            dp[day][cur_task]=max_profit;
        }
    }
    int ans=max({dp[n][1],dp[n][2],dp[n][3]});
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<ans<<endl;
}