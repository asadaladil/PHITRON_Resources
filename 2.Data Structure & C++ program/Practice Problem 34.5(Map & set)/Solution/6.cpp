/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int a=0;
    string r;
    cout<<"\nGive Full stop after completing sentence\n";
    while(1)
    {
        string s;
        cin>>s;
        if(s[s.size()-1]=='.')
        {
            s[s.size()-1]='/0';
            mp[s]++;
            if(a<mp[s])
            {
                a=mp[s];
                r=s;
            }
            break;
        }
        mp[s]++;
        if(a<mp[s])
        {
            a=mp[s];
            r=s;
        }
    }
    a==0?cout<<"\nNo Duplicate word\n":cout<<"\nMaximum Occurring word is "<<"("<<r<<")"<<" Occurring "<<a<<" times\n";
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int a=0;
    string s,r="";
    getline(cin,s);
    s[0]+=32;if(s[s.size()-1]=='.'){s[s.size()-1]=' ';}else{s+=' ';}
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=' ')
        {
            r+=s[i];
        }
        else
        {
            mp[r]++;
            if(mp[r]>a)
            {
                a=mp[r];
            }
            r="";
        }
    }
    if(a==0)
    {
        cout<<"\nNo duplicate word\n";
    }
    else
    {
        for(auto it:mp)
        {
            if(it.second==a)
            {
                cout<<"\nMaximum Occurring word is "<<"("<<it.first<<")"<<" Occurring "<<it.second<<" times\n";
            }
        }
    }
}
