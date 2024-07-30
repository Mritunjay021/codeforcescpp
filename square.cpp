#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        pair<int,int>ar[4];
        int l;
        for(int i=0;i<4;i++)
        cin>>ar[i].first>>ar[i].second;
        int t=ar[0].second;
        for(int i=1;i<4;i++)
        {
            if(ar[i].second==t)
            {
                if(((ar[0].first>=0)&&(ar[i].first>=0))||(ar[0].first<0)&&(ar[i].first<0))
                l=abs(ar[0].first-ar[i].first);
                else 
                l=abs(ar[0].first)+abs(ar[i].first);
            }
        }
        cout<<l*l<<endl;
    }
    
    return 0;
}