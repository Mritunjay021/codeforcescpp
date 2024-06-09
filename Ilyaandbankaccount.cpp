#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,c,num;
    string s,ns;
    cin>>n;
    if(n<0)
    {
        s=to_string(n);
        l=s.length();
        if(int(s[l-1])>int(s[l-2]))
        {
            c=l-1;
        }
        else
        {
            c=l-2;
        }
        for(int i=0;i<l;i++)
        {
            if(i!=c)
            {
                ns+=s[i];
            }
        }
        num=stoi(ns);
        cout<<num;

    }
    else
    {
        cout<<n;
    }
    return 0;
}