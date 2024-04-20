#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0;
    string s,sub,maxs="";
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        sub=s.substr(i,2);
        int c=1;
        for(int j=i+1;j<n-1;j++)
        {
            if(sub==s.substr(j,2))
            c++;
        }
        if(c>max)
        {
            maxs=sub;
            max=c;
        }
    }
    cout<<maxs;

    return 0;
}