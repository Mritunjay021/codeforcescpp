#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       long n,f;
       cin>>n;
       long long ar[n];
       for(long i=0;i<n;i++)
       cin>>ar[i];
       f=ar[0];
       sort(ar+1,ar+n);
       for(int i=1;i<n;i++)
       {
            if(f<ar[i])
            {
                while(f<ar[i])
                {
                    f++;
                    ar[i]-=1;
                }
            }
        }
       cout<<f<<endl;
       
    }
    
    return 0;
}
