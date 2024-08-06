#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,l;
        string s;
        cin>>n;
        cin>>s;
        if(n==1)
        cout<<1<<endl;
        else 
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='B')
                f=i;
            }
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]=='B')
                l=i;
            }
            if(f==l)
            cout<<1<<endl;
            else
            cout<<(f-l+1)<<endl;
        }
    }
}