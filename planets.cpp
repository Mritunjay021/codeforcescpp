#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,count,s=0;
        cin>>n>>c;
        int ar[n];

        for(int i=0;i<n;i++)
        cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            int t=ar[i];
            if(t!=0)
            {
                count=0;
                for(int j=i;j<n;j++)
                {
                    if(t==ar[j])
                    {
                        count++;
                        ar[j]=0;
                    }
                    
                }
                if(count>=c)
                s+=c;
                else
                s+=count;
            }
            
        }
        cout<<s<<endl;
    }
    return 0;
}