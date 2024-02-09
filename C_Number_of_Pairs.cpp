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
     ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> v;
    cinv(v, n);
    sort(v.begin(), v.end());
    ll sum = 0;
    for (int i = 0; i < n;i++)
    {
        ll x  = upper_bound(v.begin(), v.end(), (r - v[i])) - v.begin();
        x = x - (i+1);
        x = max((ll)0, x);
        ll y = lower_bound(v.begin(), v.end(), (l - v[i])) - v.begin();
        if((l-v[i])==v[y-1])
        {
            y--;
        }
        y -= (i+1);
        y = max(y,(ll) 0);
        sum += (x - y);//cout << y << "\n";
    }
    cout << sum << "\n";
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