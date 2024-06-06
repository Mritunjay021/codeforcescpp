#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,t=0,f=0;
        cin>>n;
        string s;
        cin>>s;
        for(char c='A';c<='Z';c++)
        {
            for(int i=0;i<n;i++)
            {
                if(c==s[i])
                {
                    if(t==0)
                    {
                        f+=2;
                        t++;
                    }
                    else
                    f++;
                }
            }
            t=0;
        }
        cout<<f<<endl;
    }
    cout<<endl;
    return 0;
}
