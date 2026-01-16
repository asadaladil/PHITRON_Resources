#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int visited[N];
vector<int>adj_list[N];
stack<int>st;
void DFS(int node)
{
    visited[node]=1;
    for(int adj_node:adj_list[node])
    {
        if(visited[adj_node]==2)
        {
            DFS(adj_node);
        }
    }
    st.push(node);
}
bool cycle(int node)
{
    visited[node]=1;
    for(int adj_node:adj_list[node])
    {
        if(visited[adj_node]==0)
        {
            bool run=cycle(adj_node);
            if(run)
            {
                return true;
            }
        }
        else if(visited[adj_node]==1)
        {
            return true;
        }
    }
    visited[node]=2;
    return false;
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
    }
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            bool run=cycle(i);
            if(run)
            {
                cout<<"IMPOSSIBLE\n";
                return 0;
            }
        }
    } 
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==2)
        {
            DFS(i);
        }
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }   
}
