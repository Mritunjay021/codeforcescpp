#include<bits/stdc++.h>
using namespace std;

int main() 
{    
   int a,b,s=0,r=0;
   cin>>a>>b;
   s+=a;
   while(a>=b)
   {
      s+=int(a/b);
      r+=a%b;
      if(r>=b)
      {
        s+=int(r/b) ;
        r=(r%b)+int(r/b);
      }
      a=floor(a/b);
   }
   if((a+r)>=b)
   s+=int((a+r)/b);
   cout<<s;
   return 0;
}
