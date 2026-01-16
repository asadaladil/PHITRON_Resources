#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int A[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            A[i][j]=0;
        }
    }
    for(int i=1;i<=e;i++)
    {
        int u,v;cin>>u>>v;
        A[u][v]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i][j]!=A[j][i])
            {
                cout<<"Not Bi-directional\n";
                return 0;
            }
        }
    }
    cout<<"Bi-directional\n";
}
