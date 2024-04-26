#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1,s2;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    sort(ar,ar+n);
    s1=(ar[n-2]-ar[0]);
    s2=ar[n-1]-ar[1];
    if(n==2)
    cout<<"0";
    else if(s1>s2)
    cout<<s2;
    else 
    cout<<s1;
    return 0;
}
