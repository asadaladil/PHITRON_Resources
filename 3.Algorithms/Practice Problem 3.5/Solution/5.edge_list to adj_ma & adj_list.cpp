#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"How many nodes: ";
    int n;cin>>n;
    vector<vector<int>>m;
    cout<<"How many edge: ";
    int e;cin>>e;
    if(e<=n*n)
    {
        int a,b,A[n][n];
        for(int i=1;i<=e;i++)
        {
            cin>>a>>b;
            m.push_back({a,b});
            A[a][b]=1;
        }
        cout<<endl;
        cout<<"Edge list\n";
        cout<<"[\n";
        for(int i=0;i<n;i++)
        {
            cout<<"   ["<<m[i][0]<<" "<<m[i][1]<<"]\n";
        }
        cout<<"]\n\nAdjacency Matrix\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[i][j]!=1)
                {
                    A[i][j]=0;
                }
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"\nAdjacency List\n";
        for(int i=0;i<n;i++)
        {
            cout<<i<<"->";
            for(int j=0;j<n;j++)
            {
                if(A[i][j]==1)
                {
                    cout<<j<<" ";
                }
            }
            cout<<endl;
        }
    }
}
