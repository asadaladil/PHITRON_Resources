#include<bits/stdc++.h>
using namespace std;
int a,sum=0;
vector<int>Merge(vector<int>A)
{
    if(A.size()<=1)
    {
        return A;
    }
    int m=A.size()/2;
    vector<int>B,C;
    for(int i=0; i<m; i++)
    {
        B.push_back(A[i]);
    }
    for(int i=m; i<A.size(); i++)
    {
        C.push_back(A[i]);
    }
    vector<int>Sort_B=Merge(B);
    vector<int>Sort_C=Merge(C);
    vector<int>Sort_A;
    int id1=0,id2=0,s=A.size();
    for(int i=0; i<s; i++)
    {
        if(id1==Sort_B.size())
        {
            Sort_A.push_back(Sort_C[id2]);
            id2++;
        }
        else if(id2==Sort_C.size())
        {
            Sort_A.push_back(Sort_B[id1]);
            id1++;
        }
        if(Sort_B[id1]<Sort_C[id2])
        {
            Sort_A.push_back(Sort_B[id1]);
            id1++;
        }
        else
        {
            Sort_A.push_back(Sort_C[id2]);
            id2++;
        }
    }
    for(int i=0;Sort_A[i]<a;i++)
    {
        for(int j=i+1;Sort_A[j]<a;j++)
        {
            if(Sort_A[i]+Sort_A[j]==a){sum++;break;}
        }
    }
    return Sort_A;
}
int main()
{
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    cin>>a;
    vector<int>A=Merge(b);
    cout<<sum<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
