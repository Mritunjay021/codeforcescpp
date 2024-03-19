#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s,ns="";
    cin>>s;
    vector<string> v;
    for(int i=0;i<s.length();)
    {
        if(s.substr(i,3)=="WUB")
        i+=3;
        else
        {
            while(s.substr(i,3)!="WUB" && i<s.length())
            {
                ns+=s[i];
                i++;
            }
            v.push_back(ns);
            ns="";
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(i<v.size()-1)
        cout<<v[i]+" ";
        else
        cout<<v[i];
    }
}
