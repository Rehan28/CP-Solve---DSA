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
    ll x, y;
    cin >> x >> y;
    ll a, b;
    cin >> a >> b;
    ll c, d;
    cin >> c >> d;
    vector<pair<ll,ll>> v;
    int xx = a + x;
    int yy = b + y;
    v.push_back(make_pair(xx,yy));
    yy = b - y;
    v.push_back(make_pair(xx,yy));
    xx = a + y;
    yy = b + x;
    v.push_back(make_pair(xx,yy));
    xx = a - y;
    v.push_back(make_pair(xx,yy));
    xx = a - x;
    yy = b + y;
    v.push_back(make_pair(xx,yy));
    yy = b - y;
    v.push_back(make_pair(xx,yy));
    xx = a + y;
    yy = b - x;
    v.push_back(make_pair(xx,yy));
    xx = a - y;
    v.push_back(make_pair(xx,yy));
   /////////////
    vector<pair<ll, ll>> v1;
    xx = c + x;
    yy = d + y;
    v1.push_back(make_pair(xx,yy));
    yy = d - y;
    v1.push_back(make_pair(xx,yy));
    xx = c + y;
    yy = d + x;
    v1.push_back(make_pair(xx,yy));
    xx = c - y;
    v1.push_back(make_pair(xx,yy));
    xx = c - x;
    yy = d + y;
    v1.push_back(make_pair(xx,yy));
    yy = d - y;
    v1.push_back(make_pair(xx,yy));
    xx = c + y;
    yy = d - x;
    v1.push_back(make_pair(xx,yy));
    xx = c - y;
    v1.push_back(make_pair(xx,yy));
    ll ans = 0;
    map<pair<ll, ll>, ll> mp;
    for (int i = 0; i < 8;i++)
    {
        //cout << v[i].first << " " << v[i].second << "\n";
        for (int j = 0; j < 8;j++)
        {        
                 //cout << v1[j].first << " " << v1[j].second << "\n";
            if(v[i].first==v1[j].first and v[i].second==v1[j].second and mp[{v[i].first, v[i].second}]==0)
            {
                mp[{v[i].first, v[i].second}] = 1;
                 
                ans++;
            }
        }
    }
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