#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,c=1;
    string s;
    cin>>s;
    n=s.length();
    for(int i=0;i<n;)
    {
        if(s[i]=='1'&&s.substr(i,2)!="14")
        i++;
        else if(s.substr(i,2)=="14"&&s.substr(i,3)!="144")
        i+=2;
        else if(s.substr(i,3)=="144")
        i+=3;
        else
        {
            c=0;
            break;
        }
    }
    if(c!=0)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}