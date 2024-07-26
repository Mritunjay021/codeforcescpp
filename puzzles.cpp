#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    int s=INT_MAX;
    cin>>n>>p;
    int ar[p];
    for(int i=0;i<p;i++)
    cin>>ar[i];
    sort(ar,ar+p);
    for(int i=0;i<=p-n;i++)
    {
        if(ar[i+n-1]-ar[i]<s)
        s=ar[i+n-1]-ar[i];
    }
    cout<<s;
    
    return 0;
}
