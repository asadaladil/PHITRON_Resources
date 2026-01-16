#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int visited[N];
vector<int>adj_list[N];
void DFS(int node)
{
    visited[node]=1;
    for(auto adj_node:adj_list[node])
    {
        if(visited[adj_node]==0)
        {
            DFS(adj_node);
        }   
    }
}
int main()
{
    int n,e;cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int u,v;cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    memset(visited,0,sizeof(visited));
    set<pair<int,int>>road;
    int b;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            if(i>1)
            {
                road.insert({b,i});
            }
            b=i;
            DFS(i);
        }
    }
    cout<<road.size()<<endl;
    for(auto i:road)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}