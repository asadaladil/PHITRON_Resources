#include<bits/stdc++.h>
using namespace std;
template<class Adil>
class Max_Heap
{
public:
    vector<Adil>nodes;
    Max_Heap()
    {

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
        down_heapify(idx);
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
    Max_Heap<int>H;
    vector<int>A={5,9,7,6,10,15,12,19,2};
    for(int i=0;i<A.size();i++)
    {
        H.Insert(-A[i]);
    }
    H.print_heap();
    cout<<H.get_min()<<"\n";
    H.Delete(0);
    H.print_heap();
    cout<<H.get_min()<<"\n";
}

