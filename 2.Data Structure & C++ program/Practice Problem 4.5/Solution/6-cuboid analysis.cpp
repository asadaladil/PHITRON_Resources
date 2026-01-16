#include<bits/stdc++.h>
using namespace std;
class Cuboid
{
    private:
    int length;
    int width;
    int height;
    public:
    Cuboid ()
    {
        
    }
    Cuboid (int l,int w,int h)
    {
        length=l;width=w;height=h;
    }
    int get_Volume(int l,int w,int h)
    {
        return l*w*h;
    }
    int get_Area(int l,int w,int h)
    {
        return 2*l*w+2*w*h+2*l*h;
    }
};
int main()
{
    Cuboid c;
    int a;
    cin>>a;
    vector<int>V(a),A(a);
    for(int i=0;i<a;i++)
    {
        int l,w,h;cin>>l>>w>>h;
        V[i]=c.get_Volume(l,w,h);
        A[i]=c.get_Area(l,w,h);
    }
    sort(V.begin(),V.end());
    sort(A.begin(),A.end());
    for(int i=0;i<a;i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<a;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;

}