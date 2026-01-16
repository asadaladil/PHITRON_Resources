/*#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N=505;
const long long int INF=1e18;
vector<pair<ll,ll>>adj_list[N];
ll d[N];
int visited[N],parent[N];
int nodes,edges;
int a,b;
void Dijkstra(int src)
{
    d[src]=0;
    priority_queue<pair<ll,ll>>pq;
    pq.push({0,src});
    while(!pq.empty())
    {
        pair<ll,ll>head=pq.top();
        pq.pop();
        ll selected_node=head.second;
        if(visited[selected_node])
        {
            continue;
        }
        visited[selected_node]=1;
        for(auto adj_entry:adj_list[selected_node])
        {
            ll adj_node=adj_entry.first;
            ll edge_cst=adj_entry.second;
            if(d[selected_node]+edge_cst<d[adj_node])
            {
                d[adj_node]=d[selected_node]+edge_cst;
                //visited[adj_node]=1;
                if(adj_node==b)
                {
                    return;
                }
                parent[adj_node]=selected_node;
                pq.push({-d[adj_node],adj_node});
            }
        }
    }
}
int main()
{

    int q;
    memset(visited,0,sizeof(visited));
    cin>>nodes>>edges>>q;
    for(ll i=1;i<=edges;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});      
    }
    while(q--)
    {
        cin>>a>>b;
        Dijkstra(a);
        visited[b]==0?cout<<-1<<endl:cout<<d[b]<<endl;
        memset(visited,0,sizeof(visited));
    }
}*/
#include<bits/stdc++.h>
using namespace std;
const int N=505;
#define ll long long int
const ll INF=1e18;
ll d[N][N];
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            d[i][j]=INF;
            d[i][i]=0;
        }
    }
    for(int i=1;i<=m;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        d[u][v]=w;min(d[u][v],w);
        d[v][u]=min(d[v][u],w);
    }
    for(int k=1;k<=n;k++)
    {
        for(int u=1;u<=n;u++)
        {
            for(int v=1;v<=n;v++)
            {
                d[u][v]=min(d[u][v],d[u][k]+d[k][v]);
            }
        }
    }
    while(q--)
    {
        int u,v;cin>>u>>v;
        d[u][v]==INF?cout<<-1<<endl:cout<<d[u][v]<<endl;
    }
}