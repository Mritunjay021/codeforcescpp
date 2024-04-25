#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r=0,i=0;
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        for(int j=0;j<n;j++)
        {
            if(s1[j]=='0'&&s2[j]=='1')
            i++;
            else if(s1[j]=='1'&&s2[j]=='0')
            r++;
        }
        if(r>i)
        cout<<r;
        else if(i>r)
        cout<<i;
        else 
        cout<<r;
        cout<<endl;
    }
    
    return 0;
}