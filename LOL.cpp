
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,l,l1,l2,o1,o2;
    int c=0;
    string s,p1,p2;
    cin>>n;
    cin>>s;
    l=s.length();
    if(n>=2 && n<=200)
    {
        for(int i=1;i<l;i++)
        {
            p1=s.substr(0,i);
            p2=s.substr(i,l-1);
            l1=count(p1.begin(),p1.end(),'L');
            l2=count(p2.begin(),p2.end(),'L');
            o1=count(p1.begin(),p1.end(),'O');
            o2=count(p2.begin(),p2.end(),'O');
            if((l1!=l2)&&(o1!=o2)&& (p1!=p2))
            {
                cout<<i;
                c=1;
                break;
            }
        }
    }
    if(c==0)
    {
        cout<<"-1";
    }
}
