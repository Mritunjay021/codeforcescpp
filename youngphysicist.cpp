#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int s,t=0;
    cin>>s;
    int ar[s][3];
    for(int i=0;i<s;i++) 
    {
        for(int j=0;j<3;j++)
        cin>>ar[i][j];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<s;j++)
        {
            t+=ar[j][i];
        }
        if(t!=0)
        break;
        else
        t=0;
    }
    if(t!=0)
    cout<<"NO";
    else
    cout<<"YES";
        
    return 0;
}