#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +5;
int nodes;
int adj_matrix[100][100]={0};
int level[N],parent[N],visited[N];
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
        for(int i=1;i<=nodes;i++)
        {
            if(adj_matrix[head][i]==1&&visited[i]==0)
            {
                visited[i]=1;
                level[i]=level[head]+1;
                parent[i]=head;
                q.push(i);
            }
        }
    }
}
void DFS(int node)
{
    visited[node]=1;
    for(int i=1;i<=nodes;i++)
    {
        if(adj_matrix[node][i]==1&&visited[i]==0)
        {
            parent[i]=node;
            level[i]=level[node]+1;
            DFS(i);
        }
    }
}
int main()
{
    int edges;cin>>nodes>>edges;
    for(int i=1;i<=edges;i++)
    {
        int u,v;cin>>u>>v;
        adj_matrix[u][v]=1;
        adj_matrix[v][u]=1;
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