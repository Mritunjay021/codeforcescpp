#include<bits/stdc++.h>
using namespace std;
 
int main() 
{    
   int n,p;
   cin>>n>>p;
   int ar[n];
   for(int i=0;i<n-1;i++)
   cin>>ar[i];
   int s=1;
   for(int i=0;i<=n-1 && s<p;)
   {
      if(i==0)
      s+=ar[i];
      else
      s+=ar[i-1];
      if(s==p)
      {
         cout<<"YES";
         return 0;
      }
      i=s;
   }
   cout<<"NO";
   return 0;
}