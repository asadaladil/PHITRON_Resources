#include<bits/stdc++.h>
using namespace std;
void reverse(string str)
{
	int n=str.size();
	if(n==0)
	{
		return;
	}
	char r=str[0];
	reverse(str.substr(1,n-1));
	cout<<r;
}
int main()
{
	string s;
	cin>>s;
	reverse(s);
	return 0;
}
