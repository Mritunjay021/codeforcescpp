#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,c=0;
    int ar[12];
    cin>>n;
    for(int i=0;i<12;i++)
    cin>>ar[i];
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    else if(binary_search(ar,ar+12,n))
    { 
        cout<<1;
        return 0;
    }
    else
    {
        sort(ar,ar+12);
        for(int i=11;i>=0;i--)
        {
            s+=ar[i];
            if(s>=n)
            {
                cout<<(c+1);
                return 0;
            }
            else 
            c++;
        }
    }
    cout<<-1;
    return 0;
}