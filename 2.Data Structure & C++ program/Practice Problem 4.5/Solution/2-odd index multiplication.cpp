#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mult=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(i%2!=0)
        {
            mult*=a;
        }
    }
    cout<<mult;
    return 0;
}