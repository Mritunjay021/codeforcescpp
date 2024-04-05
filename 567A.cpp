#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ar[n];
    for(long long i=0;i<n;i++)
    cin>>ar[i];
    for(long long i=0;i<n;i++)
    {
        long long mi=0,mx=0;
        if(i==0)
        {
            mi=abs(ar[i+1]-ar[i]);
            mx=abs(ar[n-1]-ar[i]);
            cout<<mi<<" "<<mx<<endl;
        }
        else if(i==n-1)
        {
            mi=abs(ar[i]-ar[i-1]);
            mx=abs(ar[i]-ar[0]);
            cout<<mi<<" "<<mx<<endl;
        }
        else
        {
            if(abs(ar[i+1]-ar[i])>abs(ar[i]-ar[i-1]))
            mi=abs(ar[i]-ar[i-1]);
            else
            mi=abs(ar[i+1]-ar[i]);
            if(abs(ar[n-1]-ar[i])>abs(ar[i]-ar[0]))
            mx=abs(ar[n-1]-ar[i]);
            else
            mx=abs(ar[i]-ar[0]);
            cout<<mi<<" "<<mx<<endl;
        }
    }
}