#include<bits/stdc++.h>
using namespace std;

int main() 
{    
   long long n,t,r=0;
   cin>>n>>t;
   long long ar[t];
   for(long long i=0;i<t;i++)
   cin>>ar[i];
   r+=(ar[0]-1);
   for(long long i=0;i<t-1;i++)
   {
    if(ar[i+1]>=ar[i])
    r+=(ar[i+1]-ar[i]);
    else
    r+=((n-ar[i])+ar[i+1]);
   }
   cout<<r;
   return 0;
}
