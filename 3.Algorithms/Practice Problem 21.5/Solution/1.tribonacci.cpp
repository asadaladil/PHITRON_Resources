#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
#define ll long long int
ll memory[N];
ll tribocci(int a)
{
    if(a<=3)
    {
        return 1;
    }
    if(memory[a]!=-1)
    {
        return memory[a];
    }
    ll ans=tribocci(a-1)+tribocci(a-2)+tribocci(a-3);
    memory[a]=ans;
    return ans;
}
int main()
{
    int n;
    memset(memory,-1,sizeof(memory));
    cin>>n;
    cout<<tribocci(n)<<endl;
    main();
}