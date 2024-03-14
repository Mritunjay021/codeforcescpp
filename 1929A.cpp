#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,s=0;
        cin>>n;
        int ar[n];
        for(long long i=0;i<n;i++)
        cin>>ar[i];
        sort(ar,ar+n);
        for(long long i=1;i<n;i++)
        {
            s+=ar[i]-ar[i-1];
        }
        cout<<s<<endl;
    }
}