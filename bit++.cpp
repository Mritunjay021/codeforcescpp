
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x=0;
    cin>>n;
    string ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i].find('+')!= string::npos)
        {
            x++;
        }
        else if(ar[i].find('-')!= string::npos)
        {
            x--;
        }
    }
    cout<<x;
    return 0;
}