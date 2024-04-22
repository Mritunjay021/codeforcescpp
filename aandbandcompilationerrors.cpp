/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n],a2[n-1],a3[n-2];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(int j=0;j<n-1;j++)
    {
        cin>>a2[j];
    }
    for(int k=0;k<n-2;k++)
    {
        cin>>a3[k];
    }
    for(int i=0;i<n-1;i++)
    {
        auto it =find(a1,a1+n,a2[i]);
        if(it== a1+n)
        {
            cout<<a2[i]<<" ";
            break;
        }
    }
    for(int i=0;i<n-2;i++)
    {
        auto it =find(a2,a2+n-1,a3[i]);
        if(it== a2+n-1)
        {
            cout<<a3[i]<<" ";
            break;
        }
    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1[n], a2[n - 1], a3[n - 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
        cin >> a2[j];
    }
    for (int k = 0; k < n - 2; k++)
    {
        cin >> a3[k];
    }
    for (int i = 0; i < n - 1; i++)
    {
        auto it = find(a1, a1 + n, a2[i]);
        if (it == a1 + n)
        {
            cout << a2[i] << " ";
            //break;
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        auto it = find(a2, a2 + (n - 1), a3[i]);
        if (it == a2 + n - 1)
        {
            cout << a3[i] << " ";
            //break;
        }
    }
    return 0;
}
