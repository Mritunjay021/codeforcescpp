#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        long long sum=0;
        cin>>n;
        while(n!=0)
        {
            if(n%2==0)
            {
                sum+=n;
                n=n/2;
            }
            else
            {
                sum+=n;
                n=(n-1)/2;
            }
            
        }
        cout<<sum<<endl;
    }
    return 0;
}