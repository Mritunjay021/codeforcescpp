#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b,m,n;
        cin>>x>>y>>a>>b;
        if(x==0 && y==0)
        cout<<0<<endl;
        else
        {
            if(x==0 || y==0)
            {
                if(x==0 && a<b)
                cout<<(y*a)<<endl;
                else if(x==0 && b<a)
                cout<<(y*b)<<endl;
                else if(y==0 && a<b) 
                cout<<(x*a)<<endl; 
                else
                cout<<(x*b)<<endl;
            }
            else
            {
                m=max(m,n);n=min(m,n);
                if((x>0 && y>0) && (x<0 && y<0))
                {
                    m=abs(m);n=abs(n);
                    if((a<b)&& ((2*a)>b)&& y>x)
                    cout<<((m-n)*a+(n*b))<<endl;
                    else if((a<b)&& ((2*a)<b)&&(y>x))
                    cout<<(m*a)<<endl;
                }
                else
                cout<<((m-n)*a)<<endl;
            }
        }
    }
    return 0;
}