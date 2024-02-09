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
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n;i++)
    {
        vp.push_back(make_pair(a[i], i));
    }
    sort(vp.begin(), vp.end());
    int cut = -1;
    ll sum = 0;
    map<ll, ll> mp;
    for (int i = 0; i < n-1;i++)
    {
        ll x = vp[i].first;
        sum += x;
        if(sum>=vp[i+1].first)
        {
            mp[vp[i].second] = 1;
        }
        else
        {
            cut = i;
        }
    }
    mp[vp[n - 1].second] = 1;
    //cout <<  cut << "\n";
    vector<int> v;
    for (int i = cut+1; i < n;i++)
    {
        if(mp[vp[i].second]==1)
        {
            //cout << cut << "\n";
            v.push_back( vp[i].second + 1);
        }
    }
    cout << v.size() << "\n";
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size();i++)
    {
        cout << v[i] << " ";
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