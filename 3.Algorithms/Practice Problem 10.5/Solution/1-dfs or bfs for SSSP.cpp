#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<int>adj_list[N];
int level[N];
void DFS(int src)
{
    visited[src]=1;
    for(int adj_node:adj_list[src])
    {
        if(visited[adj_node]==0)
        {
            level[adj_node]=level[src]+1;
            DFS(adj_node);
        }
    }
}
void BFS(int src)
{
    queue<int>q;
    visited[src]=1;
    level[N]=0;
    q.push(src);
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        for(int adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                level[adj_node]=level[head]+1;
                q.push(adj_node);
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
    BFS(1);
    //DFS(0);
    for(int i=1;i<=n;i++)
    {
        cout<<"node "<<i<<"->"<<"level: "<<level[i]<<endl;;
    }
    //int dist;cin>>dist;
    cout<<level[n]+1<<endl;
}