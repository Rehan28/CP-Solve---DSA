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
    cin >> n;
    ll a[n];
    cin(a, n);
    for (ll i = 2; i < 100000;i++)
    {
        ll xx = -1;
        ll yy = -1;
        ll f = 0;
        for (ll j = 0; j < n;j++)
        {
            ll x = a[j] % i;
            if(xx==-1)
            {
                xx = x;
            }
            else if(xx!=-1 and xx==x)
            {
                xx = x;
            }
            else if(yy==-1 or(yy!=-1 and yy==x))
            {
                yy = x;
                f = 2;
            }
            else
            {
                f = 0;
                break;
            }
        }
        if(f)
        {
            cout << i << "\n";
            return 0;
        }
    }
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