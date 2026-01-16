#include<bits/stdc++.h>
using namespace std;
void get_capital(string s)
{
    int n=s.size();
    if(s[0]>='A'&&s[0]<='Z'&&n!=0)
    {
        cout<<s[0]<<endl;
        return;
    }
    else if(n==0)
    {
        cout<<"No capital letter\n";
        return;
    }
    get_capital(s.substr(1,n-1));
}
int main()
{
    string s;
    cin>>s;
    get_capital(s);
}
