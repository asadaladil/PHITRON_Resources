#include<bits/stdc++.h>
using namespace std;
int digit_sum(string s)
{
    int n=s.size();
    if(n==1)
    {
        return s[0]-'0';;
    }
    return digit_sum(s.substr(1,n-1))+(s[0]-'0');
}
int main()
{
    string r;
    cin>>r;
    cout<<digit_sum(r)<<endl;
}
