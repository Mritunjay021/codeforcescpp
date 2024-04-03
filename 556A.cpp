#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,c=1;
    vector<char> v;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        v.push_back(s[i]);
    }
    while(c==1)
    {
        c=0;
        for(int i=0;i<v.size();i++)
        {
            if((v[i]=='1'&&v[i+1]=='0') || v[i]=='0' && v[i+1]=='1')
            {
                v.erase(v.begin()+i);
                v.erase(v.begin()+i);
                c=1;
                break;
            }
        }
    }
    cout<<v.size();
    return 0;
}