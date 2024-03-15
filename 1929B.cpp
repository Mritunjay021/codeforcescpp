#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k==(4*n-2))
        {
            cout<<(n*2)<<endl;
            continue;
        }
        else
        {
            if(k%2==0)
            cout<<(k/2)<<endl;
            else
            cout<<(k+1)/2<<endl;
        }
    }
    return 0;
}