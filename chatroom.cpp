#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s,ns="";
    cin>>s;
    int l2 = s.length();
    string c="hello";
    int l1=c.length();
    int temp=0;
    for(int i=0;i<l1;i++)
    {
        for(int j=temp;j<l2;j++)
        {
            if(c[i]==s[j])
            {
                ns+=s[j];
                temp=j+1;
                break;
            }
        }
    }
    if(ns==c)
    cout<<"YES";
    else
    cout<<"NO";
    
    
    return 0;
}