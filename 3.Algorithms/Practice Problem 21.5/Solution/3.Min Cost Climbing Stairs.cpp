#include<bits/stdc++.h>
using namespace std;
int minCostClimbingStairs(vector<int>& cost)
{
    for(int i=2;i<cost.size();i++)
    {
        cost[i]+=min(cost[i-1],cost[i-2]);
    }
    int a=min(cost[cost.size()-1],cost[cost.size()-2]);
    return a;
}
int main()
{
    int n;cin>>n;
    vector<int>cost(n);
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    cout<<minCostClimbingStairs(cost)<<endl;
    main();
    
}