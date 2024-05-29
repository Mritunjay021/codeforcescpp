#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    cin>>n>>m;
    if(n<m)
    c=n;
    else if(m<n)
    c=m;
    else
    c=n;
    if(c%2!=0)
    cout<<"Akshat";
    else
    cout<<"Malvika";
    return 0;
}