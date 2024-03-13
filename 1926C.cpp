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
        if(n/10==0)
        {
            int sum=0;
            for(int i=1;i<=n;i++)
            sum+=i;
            cout<<sum<<endl;
            continue;
        }
        int sum=45;
        for(int i=10;i<=n;i++)
        {
            string s=to_string(i);
            for(int i=0;i<s.length();i++)
            sum+=s[i]-'0';
        }
        cout<<sum<<endl;
    }
}