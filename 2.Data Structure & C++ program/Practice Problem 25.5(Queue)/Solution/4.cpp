#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>Qs;
    int a;
    cin>>a;
    Qs.push("1");
    for(int i=1;i<=a;i++)
    {
        if(i==a)
        cout<<i<<"->"<<Qs.front()<<"\n";
        string t=Qs.front();
        Qs.pop();
        Qs.push(t+"0");
        Qs.push(t+"1");
    }
    return 0;
}