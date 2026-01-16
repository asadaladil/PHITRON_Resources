#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    vector<int>m(a);
    for(int i=0;i<a;i++)
    {
        cin>>m[i];
    }
    cin>>b;
    vector<int>n(b);
     for(int i=0;i<b;i++)
    {
        cin>>n[i];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(m[i]==n[j])
            {
                cout<<m[i]<<" ";
                break;
            }
        }
    }
    return 0;
}