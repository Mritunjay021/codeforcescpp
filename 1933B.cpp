#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,t=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum%3==0)
        cout<<0<<endl;
        else if(sum%3==2)
        cout<<1<<endl;
        else if(sum%3==1)
        {
            auto it=find(ar,ar+n,1);
            if(it!=(ar+n))
            cout<<1<<endl;
            else
            {
                for(int i=0;i<n;i++)
                {
                if(ar[i]%3==1)
                {
                    cout<<1<<endl;t++;
                    break;
                }
                }
                if(!t)
                cout<<2<<endl;
            }
        }
    }
}