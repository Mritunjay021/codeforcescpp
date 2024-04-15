#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i;
    cin>>n>>m;
    if(n==1)
    i=1;
    else
    i=pow(10,n-1);
    for(;i<pow(10,n);i++)
    {
        if(i>=m && (i-m*(i/m))==0 )
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}