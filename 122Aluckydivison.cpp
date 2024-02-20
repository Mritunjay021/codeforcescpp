#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,t,c=0,temp=1;
    cin>>n;
    string s=to_string(n);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4'||s[i]=='7')
        c++;
    }
    if(c==s.length())
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        for(int i=1;i<int(n/2);i++)
        {
            int a=0;
            string st=to_string(i);
            for(int j=0;j<st.length();j++)
            {
                if(st[j]!='4'||st[j]!='7')
                {
                    a++;
                    break;
                }
            }
            if(a==0)
            {
                double n1=n/(i*1.0);
                if((int(n1/2.0)*2)==n1)
                {
                    cout<<"YES";
                    temp=0;
                    break;
                }
                
            }
        }
        if(temp==1)
        cout<<"NO";
        return 0;

    }

    
}