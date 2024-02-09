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
    ll b[m];
    cin(b, m);
    sort(a, a + n);
    sort(b, b + m);
    ll ans = 0;
    deque<ll> d;
    for (int i = m-1; i >-1;i--)
    {
        d.push_back(b[i]);
    }
    for (int i = 0; i < n;i++)
    {
        ll x = abs(a[i] - d.front());
        ll y = abs(a[n - 1] - d.back());
        if(x>y)
        {
            ans += x;
            d.pop_front();
        }
        else
        {
            ans += y;
            n--;
            i--;
            d.pop_back();
        }
    }
        // cout << ans << " " << ans1 << " " << ans2 << "\n";
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