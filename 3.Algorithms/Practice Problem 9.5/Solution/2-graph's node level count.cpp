#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<int>adj_list[N];
vector<int>level(N);
void BFS(int node)
{
    queue<int>q;
    visited[node]=1;
    q.push(node);
    level[node]=0;
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        for(int adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                q.push(adj_node);
                level[adj_node]=level[head]+1;
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int u,v;cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    BFS(3);
    for(int i=0;i<n;i++)
    {
        if(visited[i]==1)
        {
        cout<<i<<"->"<<level[i]<<endl;
        }
    }
}