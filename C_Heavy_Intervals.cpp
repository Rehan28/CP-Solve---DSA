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
    ll a[n];
    cin(a,n);
    ll b[n];
    cin(b, n);
    ll c[n];
    cin(c, n);
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n;i++)
    {
        vp.push_back(make_pair(a[i], 1));
        vp.push_back(make_pair(b[i], 2));
    }
    sort(vp.begin(), vp.end());
    stack<ll> st;
    ll sum = 0;
    sort(c, c + n);
    ll cc = n - 1;
    vector<ll> v;
    for (int i = 0; i < vp.size();i++)
    {
        ll x = vp[i].first;
        ll y = vp[i].second;
        //cout << x << " " << y << " ";
        if(y==1)
        {
            st.push(x);
        }
        else
        {
            ll last = st.top();
            st.pop();
            v.push_back(x - last);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n;i++)
    {
        sum += (v[i] * c[cc]);
        cc--;
    }
    cout << sum << "\n";

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