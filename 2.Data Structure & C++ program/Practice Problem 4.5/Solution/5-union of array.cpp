#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    vector<int>k(10000);
    vector<int>m(a);
    for(int i=0;i<a;i++)
    {
        cin>>m[i];
        k[m[i]]++;
    }
    cin>>b;
    vector<int>n(b);
    for(int i=0;i<b;i++)
    {
        cin>>n[i];k[n[i]]++;
    }
    for(int i=1;i<10000;i++)
    {
        if(k[i]>0)
        {
            cout<<i<<" ";
        }
    }
    return 0;

}