#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,b,d;
    int c=0,w=0;
    cin>>n>>b>>d;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=b)
        w+=ar[i];
        if(w>d)
        {
            c++;
            w=0;
        }
    }
    cout<<c;
    return 0;
}