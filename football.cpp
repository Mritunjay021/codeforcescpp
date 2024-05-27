#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c;
    int f=0;
    for(int i=0;i<s.length();i++)
    {
        c=0;
        for(int j=i;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c>=7)
        {
            f=1;
            break;
        }
    }
    if(f!=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}