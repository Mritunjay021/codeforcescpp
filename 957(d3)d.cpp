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
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        int ci=m-1,cnt=0;
        int wp=0,fo=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='L')
            {
                ci=m;
                for(;cnt<100;cnt++);
            }
            else if(ch=='W')
            {
                if(ci<=0) wp++;
                else
                for(;cnt<100;cnt++);
            }
            else
            {
                if(ci<=0) fo++;
                else if(cnt>0)
                for(;cnt<100;cnt++);
                else
                for(;cnt<100;cnt++);
            }
            ci--;
        }
        if(wp>k)
        fo++;
        if(fo!=0)
        cout<<"NO";
        else if(cnt<0)
        cout<<cnt;
        else
        cout<<"YES";
        cout<<endl;
    
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}