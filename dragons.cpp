#include<bits/stdc++.h>
using namespace std;

int main() 
{    
   int s,n;
   cin>>s>>n;
   vector<pair<int,int>>p(n);
   for(int i=0;i<n;i++)
   {
    cin>>p[i].first>>p[i].second;
   }
   sort(p.begin(), p.end());
   for(int i=0;i<n;i++)
   {
    if(p[i].first<s)
    {
        s+=p[i].second;
    }
    else
    {
        cout<<"NO";
        return 0;
    }
   }
   cout<<"YES";
   
   return 0;
}
