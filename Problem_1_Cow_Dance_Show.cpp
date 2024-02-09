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
    setIO("cowdance");
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    cinv(v, n);
    ll lo = 1;
    ll hi = n;
    ll mid;
    int x = 10;
    while(hi>lo)
    {
      mid = lo + (hi - lo) / 2;
      ll time = 0;
      multiset<ll> s;
      for (int i = 0; i < mid;i++)
      {
          s.insert(v[i]);
      }
      time = *(--s.end());
      for (int i = mid; i < n;i++)
      {
          ll d = *(s.begin());
          s.erase(s.begin());
          s.insert( d + v[i]);

          time = *(--s.end());
      }
      //cout << mid <<" "<<time<< "\n";
      if (time <= m)
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