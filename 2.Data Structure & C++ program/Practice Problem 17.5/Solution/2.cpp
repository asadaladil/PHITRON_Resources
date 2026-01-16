#include<bits/stdc++.h>
using namespace std;
template<class Adil>
vector<Adil>Merge(vector<Adil>A)
{
    if(A.size()==1)
    {
        return A;
    }
    int m=A.size()/2;
    vector<Adil>B,C;
    for(int i=0; i<m; i++)
    {
        B.push_back(A[i]);
    }
    for(int i=m; i<A.size(); i++)
    {
        C.push_back(A[i]);
    }
    vector<Adil>Sort_B=Merge(B);
    vector<Adil>Sort_C=Merge(C);
    vector<Adil>Sort_A;
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
        else if(Sort_B[id1]<Sort_C[id2])
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
    return Sort_A;
}
int main()
{
    int n;
    cin>>n;
    getchar();
    vector<string>b(n);
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    vector<string>A=Merge(b);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
