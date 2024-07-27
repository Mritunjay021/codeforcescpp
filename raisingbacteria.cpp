#include<bits/stdc++.h>
using namespace std;

int main() 
{    
   long n,s=1;
   cin>>n;
   if(floor(log2(n))==ceil(log2(n)) || n==1)
   cout<<1;
   else
   {
      while(n-pow(2,int(log2(n)))>=1)
      {
         s++;
         n=n-pow(2,int(log2(n)));
      }
      cout<<s;
   }
}
