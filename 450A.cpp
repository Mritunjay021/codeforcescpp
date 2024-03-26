#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n,m,p=0;
    cin>>n>>m;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int mx=*max_element(ar,ar+n);
    if(m>=mx)
    cout<<n;
    else
    {
         for(int j=1;j<=(ceil(mx/m));j++)
        {
            for(int i=0;i<n;i++)
            {
                if(ar[i]>0)
                {
                    ar[i]-=m;
                    p=i;
                }
            }
        }
        cout<<(p+1);
    }
    return 0;
    
}