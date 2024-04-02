#include<bits/stdc++.h>
using namespace std;
 
int main() 
{    
   int n,p;
   cin>>n>>p;
   int ar[n];
   ar[0]=1;
   for(int i=1;i<n;i++)
   cin>>ar[i];
   for(int i=0;i<n;)
   {
      if(i==0)
      i=i+1+ar[i];
      else
      i=i+ar[i];
      if(i==p)
      {
         cout<<"YES";
         return 0;
      }
   }
   cout<<"NO";
   
   return 0;
}