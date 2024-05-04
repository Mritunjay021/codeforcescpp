#include<bits/stdc++.h>
using namespace std;

bool check(string ns)
{
    bool c=true;
    for(int i=0;i<ns.length();i++)
    {
        c=isupper(ns[i]);
        if(c==false)
        return c;
    }
    return c;
}

int main() 
{    
   string s,ns="";
   cin>>s;
   int l=s.length();
   for(int i=1;i<l;i++)
   ns+=s[i];
   if(check(ns))
   {
        if(l>1&& islower(s[0]))
        {
            for(int i=1;i<l;i++)
            {
                s[i]=tolower(s[i]);
            }
            s[0]=toupper(s[0]);
        }
        else if(l>1 && isupper(s[0]))
        {
            for(int i=0;i<l;i++)
            {
                s[i]=tolower(s[i]);
            }
        }
        else if(l==1 &&  islower(s[0]))
        s[0]=toupper(s[0]);
        else if(l==1 && isupper(s[0]))
        s[0]=tolower(s[0]);
        
    }
   
   
   cout<<s;
   return 0;
}
