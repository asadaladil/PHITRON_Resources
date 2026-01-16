#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>S;
    int a,b;cin>>a;
    for(int i=1;i<=a;i++)
    {
        int n;cin>>n;
        S.insert(n);
    }
    cin>>b;
    for(int i=1;i<=b;i++)
    {
        int n;cin>>n;
        if(S.find(n)!=S.end())
        {
            cout<<n<<" ";
        }
    }

    //for union
//    for(int i=1;i<=b;i++)
//    {
//        int n;cin>>n;
//        S.insert(n);
//    }
//    for(auto it:S)
//    {
//        cout<<it<<" ";
//    }
}
