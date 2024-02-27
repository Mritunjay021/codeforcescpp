#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,f=0;
        cin>>n>>k;
        if(n==1 && k!=n)
        {
            cout<<k<<endl;
        }
        else if(n==k)
        {
            cout<<1<<endl;
        }
        else 
        {
            long long ar[n];
            long long c=1,sum;
            for(long long i=0;i<n;i++)
            ar[i]=1;
            while(c)
            {
                sum=0;
                for(long long i=0;i<n;i++)
                sum+=ar[i];
                if((sum-k*(sum/k))!=0)
                {
                    ar[f]=ar[f]+1;
                    if(f!=(n-1))
                        f++;
                    else
                        f=0;
                    c++;
                }
                else
                {
                    long long mx=ar[0];
                    for(long long i=1;i<n;i++)
                    {
                        if(mx<ar[i])
                        mx=ar[i];
                    }
                    cout<<mx<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}






/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=1;
        cin>>n>>k;
        if(n==1)
        {
            cout<<k<<endl;
        }
        else if((n==k) || (k==1) ||(n-k*(n/k)==0))
        {
            cout<<1<<endl;
        }
        else if(n<k)
        {
            int i=2;
            while(c)
            {
                if((n*i)>=k)
                {
                    cout<<i<<endl;
                    break;
                }
                else 
                i++;
            }
        }
        else
        {
            int i=1;
            while(c)
            {
                if(k*i>=n)
                {
                    cout<<i<<endl;
                    break;
                }
                else
                i++;
            }
        }
        
    }
    return 0;
}*/



/*
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long t;
    cin>>t;
    while(t--)
    {   
        long long n,k,i=2,t=0;
        cin>>n>>k;
        if((n==k) || (k==1) || ((n>k)&&))
        cout<<1<<endl;
        else if(n==1)
        cout<<k<<endl;
        else if(n<k)
        {
            while(t<k)
            {
                t=n*i;
                i++;
            }
            cout<<(i-1)<<endl;
        }
        else if(k<n)
        {
            while(t<n)
            {
                t=k*i;
                i++;
            }
            cout<<(i-1)<<endl;
        }
    }
}*/