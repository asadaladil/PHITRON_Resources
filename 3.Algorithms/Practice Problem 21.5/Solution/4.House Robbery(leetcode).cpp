/*#include<bits/stdc++.h>
using namespace std;
int money(vector<int>&m,int i,int dp[])
{
    if(i>=m.size())
    {
        return 0;
    }
    if(m.size()==1)
    {
        return m[0];
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int ans1=m[i]+money(m,i+2,dp);
    int ans2=m[i]+money(m,i+3,dp);
    dp[i]=max(ans1,ans2);
    return dp[i];
}
int rob(vector<int>& nums) 
{
    int n=nums.size();
    int dp[n];
    memset(dp,-1,sizeof(dp));
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,money(nums,i,dp));
    }
    return mx;
}
int main()
{
    int n;cin>>n;
    vector<int>cost(n);
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    cout<<rob(cost)<<endl;
    main();
}*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
const long long int INF=1e18;
vector<pair<int,int>>adj_list[N];
long long int d[N];
int visited[N],parent[N];
int nodes;
void Dijkstra(int src)
{
    for(int i=2;i<=nodes;i++)
    {
        d[i]=-INF;
    }
    priority_queue<pair<long long int,int>>pq;
    pq.push({d[src],src});
    while(!pq.empty())
    {
        pair<long long int ,int>head=pq.top();
        pq.pop();
        int selected_node=head.second;
        if(visited[selected_node])
        {
            continue;
        }
        visited[selected_node]=1;
        for(auto adj_entry:adj_list[selected_node])
        {
            int adj_node=adj_entry.first;
            int edge_cst=adj_entry.second;
            if(d[selected_node]+edge_cst>d[adj_node])
            {
                d[adj_node]=d[selected_node]+edge_cst;
                parent[adj_node]=selected_node;
                pq.push({-d[adj_node],adj_node});
            }
        }
    }
}
int main()
{
    cin>>nodes;
    vector<int>A(nodes+5);
    for(int i=1;i<=nodes;i++)
    {
        cin>>A[i];
    }
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=nodes;i++)
    {
        for(int j=i+2;j<=nodes;j++)
        {
            adj_list[i].push_back({j,A[j]});
        }
    }
    int src=1;
    d[src]=A[src];
    Dijkstra(src);
    int a=max(d[nodes],d[nodes-1]);
    cout<<a<<endl;
}