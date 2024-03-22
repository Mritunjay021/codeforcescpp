#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    int a=0;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            s+=n;
            a++;
        }
        else
        {
            s+=((a+1)*(n-i))+1;
            a++;
        }
    }
    cout<<s;
    return 0;
}