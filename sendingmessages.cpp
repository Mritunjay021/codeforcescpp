#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,f,a,b,t=0;
        cin>>n>>f>>a>>b;
        long ar[n];
        for(long i=0;i<n;i++)
        cin>>ar[i];
        t=n;
        for(long i=0;i<n-1;i++)
        {
            if(f>0&&t>0)
            {
                int c=(ar[i+1]-ar[i]);
                if((a*c)<b)
                {
                    f-=c*a;
                    t--;
                }
                else 
                {
                    f-=b;
                    t--;
                }
            }

        }
        if(t==0)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
    
    return 0;
}