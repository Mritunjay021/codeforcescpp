#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(((a+c)==(2*b)) ||((b-a)==(c-b)) ||((a==1)&&(c==a)))
        cout<<"Yes"<<endl;
        else
        {
            if(b<a && b<c)
            {
                if(((a+c)%(2*b))==0)
                cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;
            }
            else if(b>a && b>c)
            {
                if(a<=c)
                {
                    if((b+(b-c))%a == 0)
                    cout<<"Yes"<<endl;
                    else
                    cout<<"No"<<endl;

                }
                else if(a>c)
                {
                    if((b+(b-a))%c == 0)
                    cout<<"Yes"<<endl;
                    else
                    cout<<"No"<<endl;
                }
            }
            else 
            {
                if((isdigit((a+c)/2)) && ((a+c)%(2*b))==0)
                cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;
            }
        }

    }
    return 0;
}