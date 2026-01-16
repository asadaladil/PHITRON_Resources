#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int color[N];
int visited[N];
vector<int>adj_list[N];
bool DFS(int node)
{
    visited[node]=1;
    for(auto adj_node:adj_list[node])
    {
        if(visited[adj_node]==0)
        {
            if(color[node]==1)
            {
                color[adj_node]=2;
            }
            else
            {
                color[adj_node]=1;
            }
            bool bipartite=DFS(adj_node);
            if(!bipartite)
            {
                return false;
            }
        }
        else
       {
            if(color[node]==color[adj_node])
            {
                return false;
            }
        }              
    }
    return true;
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
    bool bipartite=true;
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            color[i]=1;
            bool ok=DFS(i);
            if(!ok)
            {
                bipartite=false;
                break;
            }
        }
    }
    if(!bipartite)
    {
        cout<<"IMPOSSIBLE\n";
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<color[i]<<" ";
        }
    }
}