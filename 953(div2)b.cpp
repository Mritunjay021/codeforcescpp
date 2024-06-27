#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,a,b;
        cin>>n>>a>>b;
        if(b-n+1>=a)
        {
            long long s1=(b*(b+1))/2;
            long long n1=b-n+1;
            long long s2=(n1*(n1+1))/2-n1;
            cout<<s1-s2<<endl;
        }
        else
        {
            if(b>a)
            {
                long long s1=(b*(b+1))/2;
                long long s2=(a*(a+1))/2;
                long long re=s1-s2+(a*(n-(b-a)));
                cout<<re<<endl;
            }
            else
            {
                long long re=n*a;
                cout<<re<<endl;
            }
            
        }
    }
    return 0;
}