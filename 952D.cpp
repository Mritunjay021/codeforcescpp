4.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,f=0,l=0;
        cin>>n>>m;
        char ar[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ar[i][j]=='#')
                {
                    while(ar[i+1][j]=='#')
                    {
                        l++;
                        i++;
                    }
                    cout<<(i-l/2+1)<<" "<<(j+1)<<endl;
                    f=1;break;
                }
            }
            if(f)
            break;
        }
        
    }
    return 0;
}
