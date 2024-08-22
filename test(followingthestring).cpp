#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        set <int>s;  
        for(int i=0;i<n;i++)
            cin>>ar[i];
        char ar1[n];
        ar1[0]='a';
        auto it=find(ar,ar+n,1);
        if(it != ar+n)
        ar1[*it]='a';
        for(int i=1;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(ar[j]==ar[i])
                ar1[i]=ar1[j]+1;
            }
        }
        for(int i=0;i<n;i++)
        cout<<ar1[i];
        cout<<endl;
    }
    return 0;
}