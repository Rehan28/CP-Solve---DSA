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
// bool comp(pair<string,int> a, pair<string,int> b) {
//    if(a.first==b.first)
//    {
//        return a.second < b.second;
//    }
//    return a.first > b.first;
// }
//Muku28
void Rehan()
{
    ll n, m, h;
    cin >> n >> m >> h;
    ll rafs = 0;
    ll rafp = 0;
    vector<pair<ll, ll>> allp;
    for (ll i = 0; i < n;i++)
    {
        ll a[m];
        ll time = h;
        for (ll j = 0; j < m;j++)
        {
            cin >> a[j];
        }
        sort(a, a + m);
        ll sum = 0;
        ll pp = 0;
        ll pe = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[j];
            if(sum<=h)
            {
                pp++;
                pe += sum;
            }
        }
        if(i==0)
        {
            rafs = pp;
            rafp = pe;
        }
        else
        {
            allp.push_back(make_pair(pp, pe));
        }
    }
    int c = 1;
    sort(allp.begin(), allp.end());
    for (int i = 0; i < allp.size();i++)
    {
        if(allp[i].first>rafs)
        {
            c++;
        }
        else if(allp[i].first==rafs and allp[i].second<rafp)
        {
            c++;
        }
    }
    cout << c << "\n";
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