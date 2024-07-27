#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long n,c=0;
        cin>>n;
        long ar[n];
        set<int> s;
        for(long i=0;i<n;i++)
        cin>>ar[i];
        for(long i=n-1;i>=0;i--)
        {
            if(s.count(ar[i])==0)
            {
                s.emplace(ar[i]);
                c++;
            }
            else 
            break;
                
        }

        cout<<(n-c)<<endl;
    }
    return 0;
}
