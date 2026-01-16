#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<int>adj_list[N];
void DFS(int node)
{
    visited[node]=1;
    for(int adj_node:adj_list[node])
    {
        if(visited[adj_node]==0)
        {
            DFS(adj_node);
        }
    }
}
int main()
{
    int n,e,cnt=0;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int u,v;cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            DFS(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
