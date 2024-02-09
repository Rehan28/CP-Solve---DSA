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
    ll n,q;
    cin>>n>>q;
    vector<ll> v;
    vector<ll> v1;
    for (int i = 0; i < n;i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
   
    unordered_set<ll> st;
    for (int i = 0; i < q;i++)
    {
        ll a;
        cin >> a;
        st.insert(a);
    }
    for(auto i:st)
    {
        v1.push_back(i);
    }
    reverse(v1.begin(), v1.end());
    for (ll ii = 0; ii < v1.size();ii++)
    {
        ll i = v1[ii];
        //cout << x << " : " << i << "\n";
        for (int j = 0; j < n; j++)
        {
            if (v[j] % (1<<i) == 0)
            {
                ll y = (1<<(i-1));
                //cout << v[j] << " ** " << y << "\n";
                v[j] += y;
            }
        }
        
    }
    for (int i = 0; i < n;i++)
    {
        cout << v[i] << " ";
    }
    nl;
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