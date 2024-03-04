#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0,mx=0;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        sort(ar,ar+n);
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=i;j<n-1;j++)
            {
                if(ar[j+1]-ar[j]<=k)
                c++;
                else if((j==n-2)&&(ar[j+1]-ar[j]<=k))
                {
                    c++;
                }
                else 
                break;
            }
            if(c>mx)
            mx=c;
        }
        cout<<n-mx-1<<endl;
    }
}