#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0,f=1;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        if(n==1)
        cout<<"YES"<<endl;
        else
        {
            m=accumulate(ar,ar+n,0)/n;
            for(int i=0;i<n;i++)
            {
                if(ar[i]>m)
                {
                    for(int j=i+1;j<n;j++)
                    {
                        if(ar[j]<m)
                        {
                            ar[j]+=ar[i]-m;
                            ar[i]=m;
                            break;
                        }
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                if(ar[i]!=m)
                f=0;
            }
            if(f)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}