#include<bits/stdc++.h>
using namespace std;
const int n=1000;
int visited[n];
int M[n][n];
void BFS(int src)
{
    queue<int>q;
    visited[src]=1;
    q.push(src);
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        cout<<head<<" ";
        for(int i=0;i<n;i++)
        {
            if(M[head][i]==1&&visited[i]==0)
            {
                visited[i]=1;
                q.push(i);
            }
        }
    }
}
int main()
{
    int n,e;
    cout<<"How many nodes: ";
    cin>>n;
    cout<<"How many edges: ";
    cin>>e;
    for(int i=1;i<=e;i++)
    {
        int a,b;cin>>a>>b;
        M[a][b]=1;
        M[b][a]=1;
    }
    BFS(2);
}
