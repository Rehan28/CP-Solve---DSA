#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){ll a;cin>>a;v.push_back(a);}
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
int Rehan()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    cinv(v,n);
    vector<ll> b;
    cinv(b,m);

    ll lo = 0;
    ll hi = 1e18+1;
    ll mid;
    while (lo<hi)
    {
        mid = lo + (hi - lo) / 2;
        map<ll, ll> mp;
        ll lastbc = -1;
        for (int i = 0; i < m;i++)
        {
            ll bc = b[i] - mid;
            ll st = lower_bound(v.begin(), v.end(), b[i]) - v.begin();
            //cout << "x " << st << "\n";
            for (int j = st-1; j >-1;j--)
            {
                if(v[j]<bc or j<=lastbc)
                {
                    break;
                }
                mp[v[j]] = 1;
            }
            ll fc = b[i] + mid;
            st = max(st, lastbc);
            for (int j = st; j<n;j++)
            {
                if(v[j]>fc)
                {
                    break;
                }
                lastbc = j;
                mp[v[j]] = 1;
            }
        }
        bool f = true;
        for (int i = 0; i < n;i++)
        {
            if(mp[v[i]]!=1)
            {
                //cout << "v : " << v[i] << " ";
                f = false;
                break;
            }
        }
        //cout << mid << " " << f << "\n";
        if(f)
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << lo << "\n";
    return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }