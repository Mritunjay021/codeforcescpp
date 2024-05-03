#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,a;
        int k=2;
        cin>>s;
        while(k<=31)
        {
            
            if((s%static_cast<int>(pow(2,k)-1))==0)
            {
                a=s/(pow(2,k) -1);
                break;
            }
            k++;
        }
        cout<<a<<endl;

    }
    return 0;
}
