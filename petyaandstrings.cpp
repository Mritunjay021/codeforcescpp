
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string s1,s2;
    int l=0;
    string c="0";
    cin>>s1>>s2;
    l=s1.length();
    for(int i=0;i<l;i++)
    {
        if(tolower(s1[i])>tolower(s2[i]))
        {
            c="1";
            break;
        }
        else if(tolower(s1[i])<tolower(s2[i]))
        {
            c="-1";
            break;
        }
    }
    cout<<c;
}