#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    sort(ar,ar+n);
    for(int i=0;i<n-2;i++)
    {
        if(((ar[i]+ar[i+1])>ar[i+2]) && ((ar[i]+ar[i+2])>ar[i+1]) && ((ar[i+1]+ar[i+2])>ar[i]))
        {
            f=1;
            break;
        }
    }
    if(f)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}