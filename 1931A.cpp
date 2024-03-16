#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int in,fl=0;
        cin>>in;
        string s;
        for(char c1='a';c1<='z';c1++)
        {
            for(char c2='a';c2<='z';c2++)
            {
                for(char c3='a';c3<='z';c3++)
                {
                    if((c1+c2+c3-(3*96))==in)
                    {
                        s+=c1;
                        s+=c2;
                        s+=c3;
                        cout<<s<<endl;
                        s="";
                        fl=1;
                        break;
                    }
                }
                if(fl==1)
                break;
            }
            if(fl==1)
            break;
        }
        
    }
    return 0;
}