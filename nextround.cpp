
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    if(ar[k-1]!=0)
    {
        for(int i=k-1;i<n-1;i++)
        {
            if(ar[i]==ar[i+1]&&ar[i]!=0)
            {
                k++;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        for(int i=k-1;i>=0;i--)
        {
            if(ar[i]==0)
            {
                k--;
            }
        }
    }
    cout<<k;
    return 0;
}