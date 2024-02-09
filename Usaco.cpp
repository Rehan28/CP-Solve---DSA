//Rakibul Islam Rehan
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
ll mod = 10e9 + 7;
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Muku28();
    setIO("convention");
    ll n, m, c;
    cin >> n >> m >> c;
    ll a[n];
    cin(a, n);
    sort(a, a + n);
    ll lo = 0;
    ll hi = 1e11;
    ll mid;
    int x = 10;
    while(hi>lo)
    {
      mid = lo + (hi - lo) / 2;
      ll last = a[0];
      ll bus = 1;
      ll cc = 1;
      for (int i = 1 ; i < n;i++)
      {
        if(a[i]-last<=mid and cc!=c)
        {
          cc++;
        }
        else
        {
          bus++;
          last = a[i];
          cc = 1;
        }
      }
      //cout << mid << " " << bus << "\n";
      if(bus<=m)
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