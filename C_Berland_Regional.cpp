#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
//Muku28
void Rehan()
{
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    ll b[n];
    cin(b,n);
    vector<pair<ll,ll>> vp;
    set<ll> st;
    for (ll i = 0; i < n;i++)
    {
        vp.push_back(make_pair(a[i], b[i]));
        st.insert(a[i]);
    }
    sort(vp.begin(), vp.end());
    vector<ll> v[n+1];
    for (ll i = 0; i < n;i++)
    {
        ll x = vp[i].first;
        ll y = vp[i].second;
        v[x].push_back(y);
        ll sz = v[x].size();
        if(sz!=1)
        {
            v[x][sz - 1] += v[x][sz - 2];
            // cout << v[x][sz - 1]<<" ";
            // cout << x << "\n";
        }
    }
   
        ll sum[n+1]= {0};
        for(auto x : st)
        {
        for (int i = 1; i <=n;i++)
        {
            ll y = v[x].size();
            ll bad = y % i;
            if(y/i!=0)
            {
                if(bad!=0)
                {
                    sum[i] += (v[x][y - 1] - v[x][bad - 1]);
                }
                else
                {
                    sum[i] += v[x][y - 1];
                }
            }
            else
            {
                break;
            }
        }
    }
     for (int i = 1; i <=n;i++)
        {
            cout << sum[i] << " ";
        }
    nl;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }