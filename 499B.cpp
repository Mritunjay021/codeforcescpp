#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string ns="";
    cin>>n>>m;
    string ar1[n];
    pair<string,string> ar[m];
    for(int i=0;i<m;i++)
    cin>>ar[i].first>>ar[i].second;
    for(int i=0;i<n;i++)
    cin>>ar1[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar1[i]==ar[j].first)
            {
                if((ar[j].first).length()<=(ar[j].second).length())
                ns+=ar[j].first+" ";
                else
                ns+=ar[j].second+" ";
            }
        }
    }
    cout<<ns;

    return 0;
}