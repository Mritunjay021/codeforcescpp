#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        int c=0;
        if(n==3||n==5||n==7)
        cout<<"YES"<<endl;
        else
        {
            for(long i=3;i<n;i+=2)
            {
                if((n-i*(n/i))==0)
                {
                    c++;
                    break;
                }
            }
            if(c!=0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}