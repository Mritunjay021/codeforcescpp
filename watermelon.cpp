
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,c=0;
    cin>>w;
    for(int i=2;i<w;i+=2)
    {
        if(2+i==w)
        {
            cout<<"YES";
            c++;
            break;
        }
    }
    if(c==0)
    {
        cout<<"NO";
    }
    return 0;
}