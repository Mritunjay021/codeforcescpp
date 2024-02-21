#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,y,s=0;
        cin>>n;
        x=(n+1)/2;
        y=(n+1)/2;
        for(long long i=1;i<=n;i++)
        {
            for(long long j=1;j<=n;j++)
            {
                if(i==x || j==y)
                s+=abs(x-i)+abs(y-j);
                else if(i==1 || i==n)
                s+=x-1;
                else if(i==(x-1) || i==(x+1))
                s+=abs(y-j);
                else if(j==(y-1) || j==(y+1))
                s+=abs(x-i);
                else 
                {
                    if(abs(x-i) >= abs(y-j))
                    s+=abs(x-i);
                    else 
                    s+=abs(y-j);
                }
            }
        }
        cout<<s<<endl;
    }
}