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
    ll a = LONG_MIN;
    ll b = LONG_MAX;
    vector<ll> v;
    for (int i = 0; i < n;i++)
    {
        ll x, y;
        cin >> x >> y;
        if(x==1)
        {
            a = max(a, y);
        }
        else if(x==2)
        {
            b = min(b, y);
        }
        else
        {
            v.push_back(y);
        }
    }
    ll c = 0;
    for (int i = 0; i < v.size();i++)
    {
        if(v[i]>=a and v[i]<=b)
        {
            c++;
        }
    }
    ll ans = (b - a) + 1;
    if(a>b)
    {
        ans = 0;
    }
    //cout << ans << "\n";
    
    cout << ans - c << "\n";

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