#include<bits/stdc++.h>
using namespace std;
const int n=1000;
int visited[n];
int M[n][n],m=0;
void BFS(int src)
{
    queue<int>q;
    visited[src]=1;
    q.push(src);
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        if(head==6)
        {
            m=1;
        }
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
    int n;
    cout<<"How many nodes: ";cin>>n;
    int e;
    cout<<"How many edges: ";cin>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;cin>>a>>b;
        M[a][b]=1;
        M[b][a]=1;
    }
    BFS(2);
    cout<<endl;
    m==1?cout<<"6 is found\n":cout<<"6 is not found\n";
}
