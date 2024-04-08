#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,x,f=0; 
    cin>>n>>x;
    if(x==1)
    {
        cout<<1;
        return 0;
    } 
    else 
    {
        for(int i=2;i<=(x/2) || i<=n;i++)
        if((x-i*(x/i))==0)
        f++;
    }
    if(x<=n)
    cout<<f+1;
    else
    cout<<f;
    return 0;
}