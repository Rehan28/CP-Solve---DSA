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
bool comp(pair<ll,ll> a, pair<ll,ll> b) {
   if(a.first==b.first)
   {
       return a.second > b.second;
   }
   return a.first < b.first;
}
//Muku28
void Rehan()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    cin(a,n);
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n;i++)
    {
        ll x = a[i] % m;
        if(x==0)
        {
            x = m;
        }
        vp.push_back(make_pair(x, i + 1));
    }
    sort(vp.begin(), vp.end(),comp);
    for (int i = n-1;i>-1;i--)
    {
        cout << vp[i].second << " ";
    }
        nl;
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