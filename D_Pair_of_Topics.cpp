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
int Rehan()
{
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    ll b[n];
    cin(b, n);
    vector<ll> v;
    for (int i = 0; i < n;i++)
    {
        ll x = a[i] - b[i];
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    ll xx = n;
    for (int i = 0; i < n;i++)
    {
        if(v[i]<1)
        {
            ll y = (1 - v[i]);
            auto it = lower_bound(v.begin(), v.end(), y);
            ll pos = it - v.begin();
            //cout << pos << "\n";
            ans += (n - pos);
        }
        else
        {
            xx = i + 1;
            break;
        }
    }
    xx -= n;
    ans += ((xx-1) * xx) / 2;
    cout << ans << "\n";
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