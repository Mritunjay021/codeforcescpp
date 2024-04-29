
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5][5];
    int s,r,c;
    for(int i=0;i<5;i++)
    {
       for(int j=0;j<5;j++)
       {
           cin>>ar[i][j];
           if(ar[i][j]==1)
           {
                s=abs(2-i)+abs(2-j);
           }
       }
    }
    
    cout<<s;
    return 0;
}