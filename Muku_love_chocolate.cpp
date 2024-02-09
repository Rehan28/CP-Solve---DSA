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
    Muku28();
    ll n,m;
    cin>>n>>m;
    ll a[n];
    cin(a,n);
    sort(a, a + n);

    ll x = 0;
    ll y = (n-m);

    ll mx = LLONG_MIN;
    
    while (x <= m)
    {
        ll sum = 1;
        for (int i = y; i < n; i++)
        {
            sum *= a[i];
        }
        for (int i = 0; i < x; i++)
        {
            sum *= a[i];
        }
        mx = max(mx, sum);
        x += 2;
        y += 2;
    }
    cout << mx << "\n";
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
   // cin>>t;
    while(t--)
    {
        Rehan();
    }
	return 0;
 }