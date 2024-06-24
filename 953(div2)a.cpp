#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,el;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>el;
            v.push_back(el);
        }
        auto it=max_element(v.begin(),v.end());
        int d=distance(v.begin(),it);
        if(d!=n-1)
        cout<<(v[d]+v[n-1])<<endl;
        else
        {
            v.erase(v.begin()+d);
            auto it1=max_element(v.begin(),v.end());
            int d1=distance(v.begin(),it1);
            cout<<v[d]+v[d1]<<endl;
        }
    }
    return 0;
}