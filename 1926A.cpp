#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ia=count(s.begin(),s.end(),'A');
        int ib=count(s.begin(),s.end(),'B');
        if(ia>ib)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;
    }
    return 0;
}