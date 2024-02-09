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
    
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    cin>>t;
    for (int i = 0;i<t;i++)
    {
        ll k, n;
        cin >> k >> n;
        ll val = k * (k - 1);
        ll sum = 0;
        ll jump = (k % 3) + ((k / 3) - 1) * 3;
        ll point = k + jump;
       
        ll j = 1;
        while(point>0)
        {
            sum += j * point;
            j++;
            point = point - 2;
        }
       
        ll ans = 0;
        if(k-1<=n)
        {
            if(val>=n)
            {
                ll mul = val / n;
                ans += (mul * sum);
                if(val%n!=0)
                {
                    ll gap = val % n;
                    for (ll i = k - 1; i <= gap;i++)
                    {
                        sum += abs((i % k) - (i % (k - 1)));
                    }
                }
            }
            else
            {
                for (ll i = k - 1; i <= n;i++)
                {
                    ans += abs((i % k) - (i % (k - 1)));
                }
            }
        }
        cout << "Case " << i + 1 << ": ";
        cout << ans << "\n";
    }

	return 0;
 }