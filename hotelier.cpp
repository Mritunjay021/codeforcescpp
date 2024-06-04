#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    char ar[n];
    int ar1[10];
    for(int i=0;i<10;i++)
    ar1[i]=0;
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        if(ar[i]=='L')
        {
            for(int j=0;j<10;j++)
            {
                if(ar1[j]==0)
                {
                    ar1[j]=1;
                    break;
                }
            }
        }
        else if(ar[i]=='R')
        {
            for(int j=9;j>=0;j--)
            {
                if(ar1[j]==0)
                {
                    ar1[j]=1;
                    break;
                }
            }
        }
        else 
        ar1[ar[i]-'0']=0;
    }
    for(int i=0;i<10;i++)
    cout<<ar1[i];

    return 0;
}