#include<bits/stdc++.h>
using namespace std;
template<class Adil>
class Min_Heap
{
public:
    vector<Adil>nodes;
    int sz;
    Min_Heap()
    {
        sz=0;
    }
    void Heap_sort()
    {
        vector<Adil>S=nodes;
        sort(S.rbegin(),S.rend());
        for(int i=0;i<S.size();i++)
        {
            cout<<-S[i]<<" ";
        }
        cout<<"\n";
    }
    void up_heapify(int idx)
    {
        while(idx>0&&nodes[idx]>nodes[(idx-1)/2])
        {
            swap(nodes[idx],nodes[(idx-1)/2]);
            idx=(idx-1)/2;
        }
    }
    void down_heapify(int idx)
    {
        while(1)
        {
            int L=idx;
            int l=2*idx+1;
            int r=2*idx+2;
            if(l<nodes.size()&&nodes[L]<nodes[l])
            {
                L=l;
            }
            if(r<nodes.size()&&nodes[L]<nodes[r])
            {
                L=r;
            }
            if(L==idx)
            {
                break;
            }
            swap(nodes[idx],nodes[L]);
            idx=L;
        }
    }
    void Insert(Adil x)
    {
        sz++;
        nodes.push_back(x);
        up_heapify(nodes.size()-1);

    }
    void print_heap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<-nodes[i]<<" ";
        }
        cout<<"\n";
    }
    void Delete(int idx)
    {
        if(idx>=nodes.size())
        {
            return;
        }
        swap(nodes[idx],nodes[nodes.size()-1]);
        nodes.pop_back();
        sz--;
        down_heapify(idx);
    }
    int Size()
    {
        return sz;
    }
    Adil Extract_min()
    {
        Adil ret=-nodes[0];
        Delete(0);
        return ret;
    }
    Adil get_min()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        return -nodes[0];
    }
};
int main()
{
    Min_Heap<int>H;
    vector<int>A={5,9,7,6,10,15,12,19,2};
    for(int i=0;i<A.size();i++)
    {
        H.Insert(-A[i]);
    }
    int a;cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<H.Extract_min()<<" ";
    }
    cout<<"\n";
}



