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
  setIO("citystate");
  int n;
  cin >> n;
  vector<pair<string, string>> vp;
  map<string, int> mp;
  for (int i = 0; i < n;i++)
  {
    string s, c;
    cin >> s >> c;
    string ss;
    ss += s[0];
    ss += s[1];
    vp.push_back(make_pair(ss, c));
    if(ss!=c)
    {
       ss += c;
       mp[ss]++;
    }
  }
  int sum = 0;
  for (int i = 0; i < n;i++)
  {
    string s = vp[i].first;
    string ss = vp[i].second;
    ss += s;
    sum += mp[ss];
  }
  cout << sum/2;
  nl;
  return 0;
 }