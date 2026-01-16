#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N=3000;
vector<pair<ll,ll>>adj_list[N];
ll d[N];
const ll INF=1e15;
int n,m,last_updated_node=-1;
ll parent[N];
bool negative_cycle=false;
void Bellman_Ford(int src)
{
    memset(d,INF,sizeof(d));
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
                    parent[v]=u;
                    if(i==n)
                    {
                        negative_cycle=true;
                        last_updated_node=v;
                    }
                }
            }
        }
    }
}
void neg_cycle(int selected_node)
{
    cout<<"YES\n";
    for(int i=1;i<=n-1;i++)
    {
        selected_node=parent[selected_node];
    }
    deque<int>cycle;
    cycle.push_back(selected_node);
    int first_node=selected_node;
    while(1)
    {
        selected_node=parent[selected_node];
        cycle.push_front(selected_node);
        if(selected_node==first_node)
        {
            break;
        }
    }
    for(auto node:cycle)
    {
        cout<<node<<" ";
    }
    cout<<endl;
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
    if(negative_cycle)
    {
        neg_cycle(last_updated_node);
    }
    else
    {
        cout<<"NO\n";
    }
}