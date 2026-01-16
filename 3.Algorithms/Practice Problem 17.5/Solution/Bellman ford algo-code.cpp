#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N=1e5+5;
vector<pair<ll,ll>>adj_list[N];
ll d[N];
const ll INF=1e12;
int n,m;
bool negative_cycle=false;
void Bellman_Ford(int src)
{
    for(ll i=1;i<=n;i++)
    {
        d[i]=INF;
    }
    d[src]=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll node=1;node<=n;node++)
        {
            for(pair<ll,ll>adj_node:adj_list[node])
            {
                ll u=node;
                ll v=adj_node.first;
                ll w=adj_node.second;
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
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
    }
    int src=1;
    Bellman_Ford(src);
    for(ll i=1;i<=n;i++)
    {
        cout<<d[i]<<" ";
    }
}