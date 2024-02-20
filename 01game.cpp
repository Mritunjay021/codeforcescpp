#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int f=0;
        vector<char>v;
        cin>>s;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            v.push_back(s[i]);
        }
        auto it=v.begin();
        while(it!=v.end()-1)
        {
            
            if((*it=='0'&& *(it+1)=='1') || (*(it)=='1' && *(it+1) =='0'))
            {
                 v.erase(it,it+2);
                f++;
            }
            else
            {
                ++it;
            }
        }
            
        
        if(f%2==0)
        cout<<"DA"<<endl;
        else
        cout<<"NET"<<endl;
        

    }
    return 0;
}
