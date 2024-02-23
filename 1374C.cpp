#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string c,ns="";
        cin>>n;
        cin>>c;
        for(int i=0;i<n;i++)
        {
            if(c[i]=='(')
            {
                cout<<"()";
            }
        }
        cout<<endl;
    }
    return 0;
}