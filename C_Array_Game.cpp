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
    ll n,k;
    cin>>n>>k;
    vector<ll> a;
    for (int i = 0; i < n;i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
        if (k >= 3)
        {
        cout << 0 << "\n";
        }
        else
        {
            ll gap = LONG_LONG_MAX;
            for (int i = 0; i < n - 1; i++)
            {
                gap = min(gap, a[i + 1] - a[i]);
            }
            if (k == 1)
            {
                cout << min(a[0], gap) << "\n";
            }
            else
            {
                vector<ll> v;
                for (int i = 0; i < n - 1; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        ll g = a[j] - a[i];
                        v.push_back(g);
                    }
                }
                ll ans = gap;
                for (int i = 0; i < v.size(); i++)
                {
                    auto it = lower_bound(a.begin(), a.end(), v[i]);
                    int pos = it - a.begin();
                    if(abs(v[i]-a[pos])==0)
                    {
                        cout << 0 << "\n";
                        return 0;
                    }
                    else
                    {
                        ll x;
                        if(pos!=0)
                        {
                            x = abs(a[pos - 1] - v[i]);
                            ans = min(ans, x);
                        }
                        x = abs(a[pos] - v[i]);
                        ans = min(ans, x);
                    }
                }
                cout << min(a[0], ans) << "\n";
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