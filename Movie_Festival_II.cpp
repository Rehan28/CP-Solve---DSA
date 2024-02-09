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
#define yes cout << "YES\n"aaaaaaaaaaa
#define nl cout<<"\n";
ll mod = 1e9 + 7;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
//Muku28
int Rehan()
{
    ll n,k;
    cin>>n>>k;
    vector<pair<ll, ll>> vp;
    int num = n;
    while (num--)
    {
        ll x, y;
        cin >> x >> y;
        vp.push_back(make_pair(y, x));
    }
    sort(vp.begin(), vp.end());
    ll ans = 0;
    multiset<ll> s;
    for (int i = 0; i < k;i++)
    {
        s.insert(0);
    }
    for (int i = 0; i < n;i++)
    {
        auto it = s.upper_bound(vp[i].second);
        if(it==s.begin())
        {
            continue;
        }
        it--;
        s.erase(it);
        s.insert(vp[i].first);
        ans++;
    }
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