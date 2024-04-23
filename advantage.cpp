#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int s,t,m,sm;
        cin>>s;
        int ar[s],arc[s];
        for(int i=0;i<s;i++)
        {
            cin>>t;
            ar[i]=t;
            arc[i]=t;
        }
        sort(arc,arc+s);
        m=arc[s-1];
        sm=arc[s-2];
        for(int i=0;i<s;i++)
        {
            if(ar[i]!=m)
            ar[i]=ar[i]-m;
            else
            ar[i]=ar[i]-sm;
        }
        for(int i=0;i<s;i++)
        cout<<ar[i]<<" ";
        cout<<endl;

    }
    
    return 0;
}
