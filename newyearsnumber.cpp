#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,t;
        int c=0;
        cin>>n;
        t=n/2020;
        for(int i=0;i<=t;i++)
        {
            if(n==((2020*i)+(2021*(t-i))))
            {
                c=1;
                break;
            }
        }
        if(c==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

