#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>S;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            S.push(s[i]);
        }
        else
        {
            if(s[i]==')'&&S.top()=='(')
            {
                S.pop();
            }
            else if(s[i]=='}'&&S.top()=='{')
            {
                S.pop();
            }
            else if(s[i]==']'&&S.top()=='[')
            {
                S.pop();
            }
            else
            {
                cout<<"No\n";
                return 0;
            }
        }
    }
    S.size()==0?cout<<"Yes\n":cout<<"No\n";
}
