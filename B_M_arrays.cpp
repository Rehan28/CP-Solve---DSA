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
    ll n,m;
    cin>>n>>m;
    ll a[n];
    cin(a,n);
    map<ll, ll> mp;
    for (int i = 0; i < n;i++)
    {
        mp[a[i] % m]++;
    }
    int ans = 0;
    for (int i = 1; i <=(m/2)+1;i++)
    {
        if(mp[i]>0)
        {
            ll x = m - i;
            if(mp[x]>0)
            {
                ll dis = max(0ll,min(mp[i], mp[x])) + 1;
                mp[i] -= dis;
                mp[x] -= dis;
                ans++;
                
            }
           ans += max(mp[i], 0ll);
           ans += max(mp[x], 0ll);
        }
    }
    if(mp[0]>0)
    {
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
    cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }