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
//Muku28
int main()
{
    Muku28();
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        mp[a[i]] = i+1;
    }
    ll q;
    cin>>q;
    ll sum1 = 0;
    ll sum2 = 0;
    for(int i=0;i<q;i++)
    {
        ll x;
        cin>>x;
        sum1 += mp[x];
        sum2 += (n-mp[x]+1);
        
    }
    cout<<sum1<<" "<<sum2<<"\n";
  return 0;
 }