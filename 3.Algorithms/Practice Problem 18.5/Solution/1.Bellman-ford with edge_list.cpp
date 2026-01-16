#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<vector<pair<int,int>>>edge_list(N+1);
int d[N];
const int INF=1e9;
int n,m;
bool negative_cycle=false;
void Bellman_ford(int src)
{
    for(int i=1;i<=n;i++)
    {
        d[i]=INF;
    }
    d[src]=0;
    for(int i=1;i<=n;i++)
    {
        for(int node=1;node<=n;node++)
        {
            for(auto adj_node:edge_list[node])
            {
                int u=node;
                int v=adj_node.first;
                int w=adj_node.second;
                if(d[u]+w<d[v])
                {
                    d[v]=d[u]+w;
                    if(i==n)
                    {
                        negative_cycle=true;
                    }
                }
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edge_list[u].push_back(make_pair(v,w));
    }
    Bellman_ford(1);
    if(negative_cycle)
    {
        cout<<"it has negative cycle\n";
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<"->"<<d[i]<<endl;
        }
    }
}
/*
5 7
1 4 4
1 3 2
3 4 1
4 2 2
4 5 -1
5 2 3
3 5 1

*/