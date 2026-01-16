#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
#define ll long long
ll dp[N];
vector<int>money1,money2;
int x,m;
int rob1(int i)
{
    if(i==0)
    {
        return money1[0];
    }
    if(i<0)
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int ans1=0,ans2=0;
    if(i-2>=m)
    {
        ans1=money1[i]+rob1(i-2);
    }
    else
    {
        ans1=money1[i];
    }
    if(i-3>=m)
    {
        ans2=money1[i]+rob1(i-3);
    }
    else
    {
        ans2=money1[i];
    }
    
    dp[i]=max(ans1,ans2);
    return dp[i];
}
int rob2(int i)
{
    if(i==0)
    {
        return money2[0];
    }
    if(i<0)
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int ans1=0,ans2=0;
    if(i-2>=m)
    {
        ans1=money2[i]+rob2(i-2);
    }
    else
    {
        ans1=money2[i];
    }
    if(i-3>=m)
    {
        ans2=money2[i]+rob2(i-3);
    }
    else
    {
        ans2=money2[i];
    }
    
    dp[i]=max(ans1,ans2);
    return dp[i];
}
int main()
{
    int n;cin>>n;
    int A[n];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    if(n==1)
    {
        cout<<A[0]<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        {
            money1.push_back(A[i]);
        }
        if(i!=0)
        {
            money2.push_back(A[i]);
        }
    }
    int a=rob1(n-2);
    memset(dp,-1,sizeof(dp));
    int b=rob2(n-2);
    cout<<max(a,b)<<endl;
}

//////TABULATION:::::


/*
int n;cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    if(n==1)
    {
        cout<<A[0]<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        {
            money1.push_back(A[i]);
        }
        if(i!=0)
        {
            money2.push_back(A[i]);
        }
    }
    dp[0]=money1[0];
    for(int i=1;i<n-1;i++)
    {
        int ans1=0,ans2=0;
        if(i-2>=0)
        {
            ans1=money1[i]+dp[i-2];
        }
        else
        {
            ans1=money1[i];
        }
        if(i-3>=0)
        {
            ans2=money1[i]+dp[i-3];
        }
        else
        {
            ans2=money1[i];
        }
        dp[i]=max(ans1,ans2);
    }
    int a=max(dp[n-2],dp[n-3]);
    memset(dp,0,sizeof(dp));
    dp[0]=money2[0];
    for(int i=1;i<n-1;i++)
    {
        int ans1=0,ans2=0;
        if(i-2>=0)
        {
            ans1=money2[i]+dp[i-2];
        }
        else
        {
            ans1=money2[i];
        }
        if(i-3>=0)
        {
            ans2=money2[i]+dp[i-3];
        }
        else
        {
            ans2=money2[i];
        }
        dp[i]=max(ans1,ans2);
    }
    int b=max(dp[n-2],dp[n-3]);
    cout<<max(a,b);
}*/