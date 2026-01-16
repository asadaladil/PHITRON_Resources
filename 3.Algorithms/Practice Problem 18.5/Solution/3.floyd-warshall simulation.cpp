#include<bits/stdc++.h>
using namespace std;
const int N=505;
#define ll long long int
const ll INF=1e18;
ll d[N][N];
int main()
{
    int n,m;
    cin>>n>>m;
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
        d[u][v]=min(d[u][v],w);
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
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}