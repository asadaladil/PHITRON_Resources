#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>parent_list[N];
int dp[N];
int root,target_node;
/*int max_distance(int node)
{
    if(node==root)
    {
        return 0;
    }
    if(dp[node]!=-1)
    {
        return dp[node];
    }
    int ans=0;
    for(auto parent:parent_list[node])
    {
        int par_dist=max_distance(parent);
        ans=max(ans,par_dist);
    }
    ans++;
    dp[node]=ans;
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        parent_list[v].push_back(u);
    }
    memset(dp,-1,sizeof(dp));
    cin>>root>>target_node;
    cout<<max_distance(target_node)<<endl;

}*/
/*
6 7
1 2
1 3
2 4
2 5
3 5
4 5
5 6
1 6
*/


/////// TABULATION:::::::::::



int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        parent_list[v].push_back(u);
    }
    memset(dp,-1,sizeof(dp));
    cin>>root>>target_node;
    dp[root]=0;
}