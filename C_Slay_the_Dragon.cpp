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
    vector<ll> v;
    for (ll i = 0; i < n;i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    ll sum = 0;
    sort(v.begin(), v.end());

    for (ll i = 0; i < n;i++)
    {
        sum += v[i];
    }

    ll m;
    cin >> m;
    while(m--)
    {
        ll x, y;
        cin >> x >> y;
        ll pos = lower_bound(v.begin(), v.end(), x)-v.begin();
        ll value = LLONG_MAX;
        if(pos>0)
        {
            value = min(value, (x - v[pos - 1]) + max((ll)0, y - sum + v[pos - 1]));
        }
        if(pos<n)
        {
            value = min(value, max((ll)0, y - sum + v[pos]));
        }
        cout << value << "\n";
    }
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