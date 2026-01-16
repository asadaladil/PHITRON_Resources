#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int a;cin>>a;
    for(int i=0;i<a;i++)
    {
        int b;cin>>b;
        if(mp[b]>0)
        {
            cout<<"First Duplicate element is "<<b<<", first occurring at index "<<mp[b]<<"\n";
            break;
        }
        mp[b]=i;
    }
}
