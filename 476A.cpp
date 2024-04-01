#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
    {
        for(int i=n;i>=0;i--) 
        {
            double a=i/2.0;
            double b=n-i;
            double c=((a+b)-m*(int(a+b)/m));
            if(fabs(c)< 1e-9)
            {
                cout<<int(a+b);
                return 0;
            }
        }
    }
    else if(n==m)
    {
        cout<<n;
        return 0;
    }
    cout<<-1;
    return 0;
}