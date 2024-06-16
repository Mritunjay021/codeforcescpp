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
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        long long int s=0,mx=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(i==0 && ar[0]==0)
            c++;
            
            else
            {
                if(mx>ar[i])
                s+=ar[i];
                else
                {
                    s+=mx;
                    mx=ar[i];
                }
                if(s==mx)
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
