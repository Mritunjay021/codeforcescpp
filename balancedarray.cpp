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
        if((n/2)%2!=0 || (int(n/2) ==1))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int ar[n];
            for(int i=0;i<n/2;i++)
            {
                ar[i]=2*(i+1);
                ar[i+n/2]=(2*i)+1;
            }
            ar[n-1]+=n/2;
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<ar[i]<<" ";
            }
            cout<<endl;
            
        }
    }
    return 0;
}

