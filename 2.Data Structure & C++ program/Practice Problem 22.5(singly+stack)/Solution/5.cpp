#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else
        return 0;
}
int main()
{
    string R;
    cin>>R;
    stack<char>st;
    string p;
    for(int i = 0; i < R.size(); i++)
    {
        if(R[i] >= 'a' && R[i] <= 'z')
            p+=R[i];
        else if(R[i] == '(')
            st.push('(');
        else if(R[i] == ')')
        {
            while(st.size()!=0 && st.top() != '(')
            {
                p+=st.top();
                st.pop();
            }
            if(st.top() == '(')
            {
                st.pop();
            }
        }
        else{
            while(st.size() && prec(R[i]) <= prec(st.top()))
            {
                p+=st.top();
                st.pop();
            }
            st.push(R[i]);
        }
    }
   while(st.size()!=0)
    {
        p+= st.top();
        st.pop();
    }
    cout<<p;
//    stack<int>S;
//    for(int i=0;i<p.size();i++)
//    {
//        if(p[i]>='0'&&p[i]<='9')
//        {
//            S.push(p[i]-48);
//        }
//        else
//        {
//            if(p[i]=='+')
//            {
//                int a=S.top();S.pop();
//                int b=S.top();S.pop();
//                S.push(a+b);
//            }
//            if(p[i]=='-')
//            {
//                int a=S.top();S.pop();
//                int b=S.top();S.pop();
//                S.push(b-a);
//            }
//            if(p[i]=='*')
//            {
//                int a=S.top();S.pop();
//                int b=S.top();S.pop();
//                S.push(a*b);
//            }
//            if(p[i]=='/')
//            {
//                int a=S.top();S.pop();
//                int b=S.top();S.pop();
//                S.push(b/a);
//            }
//        }
//
//    }
//    cout<<S.top();
//    return 0;
}
