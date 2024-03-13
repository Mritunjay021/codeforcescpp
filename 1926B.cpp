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
        string ar1[n];
        for(int i=0;i<n;i++)
        cin>>ar1[i];
        int ar[n][n];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ar[i][j]=ar1[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(ar[i][j]=='1')
                c++;
            }
            if(c!=0)
            v.push_back(c);
        }
        if( !v.empty() && v[0]!=v[1])
        cout<<"TRIANGLE"<<endl;
        else
        cout<<"SQUARE"<<endl;
    }
}