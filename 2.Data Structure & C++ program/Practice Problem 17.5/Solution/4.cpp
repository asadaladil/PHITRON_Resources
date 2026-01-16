#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>A,int n)
{
    if(n==0)
    {
        return A[0];
    }
    return A[n]+sum(A,n-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<sum(A,n-1);
}