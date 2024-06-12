#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c=1,s=1;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]<=ar[i+1])
        {
            c++;
            if(c>s)
            s=c;
        }
        else
        c=1;
    }
    if(n==1)
    cout<<'1';
    else
    cout<<s;
}