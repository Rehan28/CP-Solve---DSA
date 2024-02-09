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
    vector<ll> p;
    vector<ll> v;
    for (int i = 0; i < n;i++)
    {
        ll a, b;
        cin >> a >> b;
        p.push_back(a);
        v.push_back(b);
    }
    set<pair<double, pair<ll, ll>>> col;
    for (int i = 0; i < n-1;i++)
    {
        double dis = p[i + 1] - p[i];
        if(v[i+1]>=v[i])
        {
            col.insert(make_pair(INT_MAX, make_pair(i, i + 1)));
        }
        else
        {
            double vel = v[i] - v[i + 1];
            double time = dis / vel;
            col.insert(make_pair(time, make_pair(i, i + 1)));
        }
    }
    for(auto it:col)
    {
        double time = it.first;
        ll pos = it.second.first;
        ll pos1 = it.second.second;
        
    }

    return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }