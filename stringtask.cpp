#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s,ns="";
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    if(isupper(s[i]))
    s[i]=tolower(s[i]);
    for(int i=0;i<l;i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
        {
            ns+=".";
            ns+=s[i];
        }
    }
    cout<<ns;
    
    return 0;
}