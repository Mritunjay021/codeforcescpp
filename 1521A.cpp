#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x=0,y=0,z=0,c=1,f=1;
    cin>>a>>b;
    while(f==1 && z<pow(10,18))
    {
        if(x+y!=z)
        {
            x=a*c;y=a*(c+1);
            z=a*b*c;
            c++;
        }
        else
        {
            cout<<"YES"<<endl; 
            cout<<x<<" "<<y<<" "<<z<<endl;
            f=0;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}