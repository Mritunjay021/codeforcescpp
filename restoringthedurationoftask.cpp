#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long ar[n];
        long ar1[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        for(int i=0;i<n;i++)
        cin>>ar1[i];
        for(int i=0;i<n;i++)
        {
            if(i==0)
            cout<<(ar1[i]-ar[i])<<" ";
            else
            {
                if(ar[i]<ar1[i-1])
                cout<<(ar1[i]-ar1[i-1])<<" ";
                else
                cout<<(ar1[i]-ar[i])<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}