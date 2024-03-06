#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(int i=pow(10,n-1)+1;i<pow(10,n);i++)
        {
            string s=to_string(i);
            auto it=s.find('0');
            if(it != string::npos)
            {
                continue;
            }
            int t=0;
            for(int j=0;j<s.length();j++)
            {
                if(i%(s[j]-'0')==0)
                break;
                else
                t++;
            }
            if(t==s.length())
            {
                cout<<i<<endl;
                c++;
                break;
            }
            else
            continue;

        }
        if(c==0)
        cout<<-1<<endl;

    }
}