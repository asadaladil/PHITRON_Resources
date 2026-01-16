#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of nodes: ";
    int n;
    cin>>n;
    int m[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            m[i][j]=0;
        }
    }
    cout<<"How many edges: ";
    int e;cin>>e;
    if(e<=n*n)
    {
        for(int i=1;i<=e;i++)
        {
            int a,b;cin>>a>>b;
            m[a][b]=1;
        }
        cout<<endl;
        cout<<"Adjacency Matrix\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"Adjacency list\n";
        for(int i=0;i<n;i++)
        {
            cout<<i<<"->";
            for(int j=0;j<n;j++)
            {
                if(m[i][j]==1)
                {
                    cout<<j<<" ";
                }
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Graph cannot be formed!!!!";
    }

}
