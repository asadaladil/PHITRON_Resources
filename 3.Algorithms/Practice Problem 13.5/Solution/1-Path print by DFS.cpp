#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +5;
vector<int>adj_list[N];
int visited[N],level[N],parent[N];
void BFS(int src)
{
    visited[src]=1;
    level[src]=1;
    parent[src]=-1;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        for(auto adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                parent[adj_node]=head;
                level[adj_node]=level[head]+1;
                q.push(adj_node);
            }
        }
    }
}
void DFS(int node)
{
    visited[node]=1;
    for(auto adj_node:adj_list[node])
    {
        if(visited[adj_node]==0)
        {
            parent[adj_node]=node;
            level[adj_node]=level[node]+1;
            DFS(adj_node);
        }
    }
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=1;i<=edges;i++)
    {
        int u,v;cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src=1;
    DFS(src);
    if(visited[nodes]==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    cout<<level[nodes]+1<<endl;
    int selected=nodes;
    vector<int>path;
    while(1)
    {
        path.push_back(selected);
        if(selected==src)
        {
            break;
        }
        selected=parent[selected];
    }
    reverse(path.begin(),path.end());
    for(auto node:path)
    {
        cout<<node<<" ";
    }
    cout<<endl;
}