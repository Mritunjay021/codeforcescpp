#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ns;
    cin>>s;
    ns=toupper(s[0]);
    for(int i=1;i<s.length();i++)
    {
        ns+=s[i];
    }
    cout<<ns;
    return 0;

}