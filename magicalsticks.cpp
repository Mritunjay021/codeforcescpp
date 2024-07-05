
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,el;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>el;
        if(el%2==0)
        {
            cout<<(el/2)<<endl;
        }
        else if(el%2!=0)
        {
            cout<<((el+1)/2)<<endl;
        }
    }
}