#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int s1=0,s2=accumulate(ar,ar+n,0);
    int c=0;
    for(int i=n-1;i>=0;i--)
    {
        s1+=ar[i];
        s2-=ar[i];
        c++;
        if(s1>s2)
        {
            cout<<c;
            return 0;
        }

    }
    
    return 0;
}