#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
#define int long long
typedef long double ld;
typedef pair<ll, ll> p64;
typedef vector<ll> v64;
// typedef vector<vector<ll> > vv64;
typedef vector<p64> vp64;
typedef set<ll> s64;
typedef set<p64> sp64;
typedef map<ll, ll> m64;

#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define al(arr, n) arr, arr + n
#define sz(x) ((ll)(x).size())

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,el;
        cin>>n>>m;
        
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>el;
                arr[i][j]=el;
            }
        }
        if(n==1 && m==1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n==1 && m==2 || n==2 && m==1)
        {
            swap(arr[0][0],arr[n-1][m-1]);
        }
        else 
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m-1;j+=2)
                {
                    swap(arr[i][j],arr[i][j+1]);
                }
            }
            if(m%2!=0)
            {
                for(int i=0;i<n && i+1<n;i+=2)
                swap(arr[i][m-1],arr[i+1][m-1]);
            }
            if(n%2!=0)
            swap(arr[0][0],arr[n-1][m-1]);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

