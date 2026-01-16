#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int a;cin>>a;
    for(int i=0;i<a;i++)
    {
        int b;cin>>b;
        mp[b]++;
    }
    for(auto it: mp)
    {
        cout<<it.first<<":"<<it.second<<"\n";
    }

}
