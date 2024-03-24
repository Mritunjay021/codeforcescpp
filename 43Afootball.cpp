#include<bits/stdc++.h>
using namespace std;

int main() 
{    
   int n,max=0;
   string r;
   cin>>n;
   set<string>s;
   string ar[n];
   for(int i=0;i<n;i++)
   {
      string st;
      cin>>st;
      s.insert(st);
      ar[i]=st;
   }
   for(auto it:s)
   {
        int c=count(ar,ar+n,it);
        if(c>max)
        {
            max=c;
            r=it;
        }
   }
   cout<<r;
   return 0;
}
