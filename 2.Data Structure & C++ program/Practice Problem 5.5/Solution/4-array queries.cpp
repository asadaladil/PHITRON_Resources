#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int k;
        cin>>k;
        int low=0,high=n-1,F=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]==k)
            {
                cout<<"YES\n";
                F=1;
                break;
            }
            if(a[mid]>k)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        if(F==0)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}