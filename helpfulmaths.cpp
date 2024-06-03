#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l;
    vector <int> v;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]!='+')
        {
            v.push_back(int(s[i]));
        }
    }
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end()-1;it++)
    {
        cout<<(*it-'0')<<"+";
    }
    cout<<(v.back()-'0');
    return 0;
}
