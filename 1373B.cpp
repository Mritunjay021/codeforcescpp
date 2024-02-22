#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c1=count(s.begin(),s.end(),'1');
        int c0=count(s.begin(),s.end(),'0');
        int c;
        if(c1<=c0)
        c=c1;
        else
        c=c0;
        if(c%2 != 0)
        cout<<"DA"<<endl;
        else
        cout<<"NET"<<endl;
    }
    return 0;
}