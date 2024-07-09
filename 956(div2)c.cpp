#include <bits/stdc++.h>
using namespace std;

//***********************************************************************************

#define rd(x) \
    int x;    \
    cin >> x;
#define dsort(v) sort(v.begin(), v.end(), greater<int>());
#define asort(v) sort(all(v));
#define fr(i, a, b) for (int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()
#define int long long
#define endl "\n"
#define fast                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#define vr(n, v)      \
    vector<int> v(n); \
    fr(i, 0, n - 1) { cin >> v[i]; }
#define vr1(n, v)         \
    vector<int> v(n + 1); \
    fr(i, 1, n) { cin >> v[i]; }
#define sr(str) \
    string str; \
    cin >> str;
#define vi vector<int>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define sz(x) (int)(x).size()

//***********************************************************************************

vector<int> bin(int n)
{
    vector<int> ans;
    while (n > 0)
    {
        ans.emplace_back(n % 2);
        n /= 2;
    }
    reverse(all(ans));
    return ans;
}

int setbit(int n)
{
    return (__builtin_popcount(n));
}

void seev(int n)
{
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

//*******************************************************************************

vector<int> solve(vector<int> &a, vector<int> &b, vector<int> &c, int req)
{
    int n = a.size();
int la = 0;
int ra = lower_bound(a.begin(), a.end(), req) - a.begin();
if (ra == n)
    return {-1}; 
int lb = ra + 1;
if (lb >= n)
    return {-1}; 
int rb = lb;
for (; rb < n; rb++)
{
    if (b[rb] - b[lb - 1] >= req)
    {
        break;
    }
}
if (rb == n)
    return {-1}; 
int lc = rb + 1;
if (lc >= n)
    return {-1}; 
int rc = n - 1;
int bb = b[rb] - b[lb - 1];
int cc = c[rc] - c[lc - 1];
//  cout<<"bb and cc "<<bb<<" "<<cc<<endl;
if (bb >= req && cc >= req)
{
    return {la + 1, ra + 1, lb + 1, rb + 1, lc + 1, rc + 1};
    }
    else
    {
        return {-1};
    }
}

int32_t main()
{
    fast;
    rd(t);
    while (t--)
    {
        rd(n);
        vr(n, a);
        vr(n, b);
        vr(n, c);
        fr(i, 1, n - 1)
        {
            a[i] += a[i - 1];
            b[i] += b[i - 1];
            c[i] += c[i - 1];
        }
        int tot = a[n - 1]; 
        int req = (tot + 2) / 3;
       // cout<<req<<" is req"<<endl;
        vector<int> ans = solve(a, b, c, req);
      
      //  abc
        if (ans.size() == 6)
        { // cout<<"abc" ;
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        else
        {   ans.clear() ; 
            // acb
           // cout<<"acb" ; 
            ans = solve(a, c, b, req);
            if (ans.size() == 6)
            {
                cout<<ans[0]<<" "<<ans[1]<<" "<<ans[4]<<" "<<ans[5]<<" "<<ans[2]<<" "<<ans[3] ;
                cout << endl;
            }
            else
            {
                // bac
                ans.clear() ; 
               // cout<<"bac" ;
                ans = solve(b, a, c, req);
                if (ans.size() == 6)
                {
                    cout << ans[2] << " " << ans[3] << " " << ans[0] << " " << ans[1] << " " << ans[4] << " "<< ans[5];
                    cout << endl;
                }
                else
                {
                    // bca
                    ans.clear() ; 
                 //   cout<<"bca" ;
                    ans = solve(b, c, a, req);
                    if (ans.size() == 6)
                    {
                        cout << ans[4] << " " << ans[5] << " " << ans[0] << " " << ans[1] << " " << ans[2] << " "<< ans[3];
                        cout << endl;
                    }
                    else
                    {
                        // cab
                        ans.clear() ; 
                      //  cout<<"cab" ;
                        ans = solve(c, a, b, req);
                        if (ans.size() == 6)
                        {
                            cout << ans[2] << " " << ans[3] << " " << ans[4] << " " << ans[5] << " " << ans[0] << " " <<ans[1];
                            cout << endl;
                        }
                        else
                        {  ans.clear() ; 
                            // cba
                          //  cout<<"cba" ;
                            ans = solve(c, b, a, req);
                            if (ans.size() == 6)
                            {
                                cout << ans[4] << " " << ans[5] << " " << ans[2] << " " << ans[3] << " " << ans[0] << " " <<ans[1];
                                cout << endl;
                            }
                            else
                            {
                                cout << -1 << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}